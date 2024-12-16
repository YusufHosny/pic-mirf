// ADAPTED MIRF EXAMPLE
// ESPIDF MIRF LIBRARY: https://github.com/nopnop2002/esp-idf-mirf/tree/master

#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>
#include <string.h>
#include "mcc_generated_files/system/system.h"

#include "mirf.h"

#define CONFIG_RECEIVER 1
#define CONFIG_RADIO_CHANNEL 115
#define CONFIG_ADVANCED 1
#define CONFIG_RF_RATIO_1M 1
#define CONFIG_RETRANSMIT_DELAY 100

void led_toggle() {
    LED_Toggle();
}

#if CONFIG_ADVANCED
void AdvancedSettings(NRF24_t * dev)
{
#if CONFIG_RF_RATIO_2M
	Nrf24_SetSpeedDataRates(dev, 1);
#endif // CONFIG_RF_RATIO_2M

#if CONFIG_RF_RATIO_1M
	Nrf24_SetSpeedDataRates(dev, 0);
#endif // CONFIG_RF_RATIO_2M

#if CONFIG_RF_RATIO_250K
	Nrf24_SetSpeedDataRates(dev, 2);
#endif // CONFIG_RF_RATIO_2M
	Nrf24_setRetransmitDelay(dev, CONFIG_RETRANSMIT_DELAY);
}
#endif // CONFIG_ADVANCED

#if CONFIG_RECEIVER
void receiver(void *pvParameters)
{
	NRF24_t dev;
	Nrf24_init(&dev);
	uint8_t payload = 32;
	uint8_t channel = CONFIG_RADIO_CHANNEL;
	Nrf24_config(&dev, channel, payload);

	// Set my own address using 5 characters
	int ret = Nrf24_setRADDR(&dev, (uint8_t *)"FGHIJ");
	if (ret != NRF_OK) {
		while(1) { DELAY_milliseconds(1); }
	}

#if CONFIG_ADVANCED
	AdvancedSettings(&dev);
#endif // CONFIG_ADVANCED

	// Print settings
	Nrf24_printDetails(&dev);

	uint8_t buf[32];

	// Clear RX FiFo
	while(1) {
		if (Nrf24_dataReady(&dev) == false) break;
		Nrf24_getData(&dev, buf);
	}

	while(1) {
		// Wait for received data
		if (Nrf24_dataReady(&dev)) {
			Nrf24_getData(&dev, buf);
		}
		DELAY_milliseconds(1); // Avoid WatchDog alerts
	}
}
#endif // CONFIG_RECEIVER


#if CONFIG_SENDER
void sender(void *pvParameters)
{
	NRF24_t nrf;
	Nrf24_init(&nrf);
	uint8_t payload = 32;
	uint8_t channel = CONFIG_RADIO_CHANNEL;
	Nrf24_config(&nrf, channel, payload);

	// Set destination address using 5 characters
	int ret = Nrf24_setTADDR(&nrf, (uint8_t *)"FGHIJ");
	if (ret != NRF_OK) {
		while(1) { DELAY_milliseconds(1); }
	}

#if CONFIG_ADVANCED
	AdvancedSettings(&nrf);
#endif // CONFIG_ADVANCED

	// Print settings
	Nrf24_printDetails(&nrf);

	uint8_t buf[32] = "cowabunga.";
	while(1) {
		Nrf24_send(&nrf, buf);
		Nrf24_isSend(&nrf, 1000);
		DELAY_milliseconds(1);
	}
}
#endif // CONFIG_SENDER

void main(void)
{
    SYSTEM_Initialize();
    INTERRUPT_GlobalInterruptEnable();
    TMR0_OverflowCallbackRegister(led_toggle);
    TMR0_Start();
    
    
#if CONFIG_RECEIVER
	receiver(NULL);
#endif

#if CONFIG_SENDER
    sender(NULL);
#endif

}