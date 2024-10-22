/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.1.1
*/

/*
© [2024] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RC1 aliases
#define nRF24_CSN_TRIS                 TRISCbits.TRISC1
#define nRF24_CSN_LAT                  LATCbits.LATC1
#define nRF24_CSN_PORT                 PORTCbits.RC1
#define nRF24_CSN_WPU                  WPUCbits.WPUC1
#define nRF24_CSN_OD                   ODCONCbits.ODCC1
#define nRF24_CSN_ANS                  ANSELCbits.ANSELC1
#define nRF24_CSN_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define nRF24_CSN_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define nRF24_CSN_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define nRF24_CSN_GetValue()           PORTCbits.RC1
#define nRF24_CSN_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define nRF24_CSN_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define nRF24_CSN_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define nRF24_CSN_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define nRF24_CSN_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define nRF24_CSN_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define nRF24_CSN_SetAnalogMode()      do { ANSELCbits.ANSELC1 = 1; } while(0)
#define nRF24_CSN_SetDigitalMode()     do { ANSELCbits.ANSELC1 = 0; } while(0)

// get/set RC2 aliases
#define nRF24_CE_TRIS                 TRISCbits.TRISC2
#define nRF24_CE_LAT                  LATCbits.LATC2
#define nRF24_CE_PORT                 PORTCbits.RC2
#define nRF24_CE_WPU                  WPUCbits.WPUC2
#define nRF24_CE_OD                   ODCONCbits.ODCC2
#define nRF24_CE_ANS                  ANSELCbits.ANSELC2
#define nRF24_CE_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define nRF24_CE_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define nRF24_CE_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define nRF24_CE_GetValue()           PORTCbits.RC2
#define nRF24_CE_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define nRF24_CE_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define nRF24_CE_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define nRF24_CE_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define nRF24_CE_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define nRF24_CE_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define nRF24_CE_SetAnalogMode()      do { ANSELCbits.ANSELC2 = 1; } while(0)
#define nRF24_CE_SetDigitalMode()     do { ANSELCbits.ANSELC2 = 0; } while(0)

// get/set RC4 aliases
#define MOSI_TRIS                 TRISCbits.TRISC4
#define MOSI_LAT                  LATCbits.LATC4
#define MOSI_PORT                 PORTCbits.RC4
#define MOSI_WPU                  WPUCbits.WPUC4
#define MOSI_OD                   ODCONCbits.ODCC4
#define MOSI_ANS                  ANSELCbits.ANSELC4
#define MOSI_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define MOSI_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define MOSI_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define MOSI_GetValue()           PORTCbits.RC4
#define MOSI_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define MOSI_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define MOSI_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define MOSI_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define MOSI_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define MOSI_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define MOSI_SetAnalogMode()      do { ANSELCbits.ANSELC4 = 1; } while(0)
#define MOSI_SetDigitalMode()     do { ANSELCbits.ANSELC4 = 0; } while(0)

// get/set RC5 aliases
#define MISO_TRIS                 TRISCbits.TRISC5
#define MISO_LAT                  LATCbits.LATC5
#define MISO_PORT                 PORTCbits.RC5
#define MISO_WPU                  WPUCbits.WPUC5
#define MISO_OD                   ODCONCbits.ODCC5
#define MISO_ANS                  ANSELCbits.ANSELC5
#define MISO_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define MISO_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define MISO_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define MISO_GetValue()           PORTCbits.RC5
#define MISO_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define MISO_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define MISO_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define MISO_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define MISO_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define MISO_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define MISO_SetAnalogMode()      do { ANSELCbits.ANSELC5 = 1; } while(0)
#define MISO_SetDigitalMode()     do { ANSELCbits.ANSELC5 = 0; } while(0)

// get/set RC6 aliases
#define SCK_TRIS                 TRISCbits.TRISC6
#define SCK_LAT                  LATCbits.LATC6
#define SCK_PORT                 PORTCbits.RC6
#define SCK_WPU                  WPUCbits.WPUC6
#define SCK_OD                   ODCONCbits.ODCC6
#define SCK_ANS                  ANSELCbits.ANSELC6
#define SCK_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define SCK_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define SCK_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define SCK_GetValue()           PORTCbits.RC6
#define SCK_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define SCK_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define SCK_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define SCK_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define SCK_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define SCK_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define SCK_SetAnalogMode()      do { ANSELCbits.ANSELC6 = 1; } while(0)
#define SCK_SetDigitalMode()     do { ANSELCbits.ANSELC6 = 0; } while(0)

// get/set RF3 aliases
#define LED_TRIS                 TRISFbits.TRISF3
#define LED_LAT                  LATFbits.LATF3
#define LED_PORT                 PORTFbits.RF3
#define LED_WPU                  WPUFbits.WPUF3
#define LED_OD                   ODCONFbits.ODCF3
#define LED_ANS                  ANSELFbits.ANSELF3
#define LED_SetHigh()            do { LATFbits.LATF3 = 1; } while(0)
#define LED_SetLow()             do { LATFbits.LATF3 = 0; } while(0)
#define LED_Toggle()             do { LATFbits.LATF3 = ~LATFbits.LATF3; } while(0)
#define LED_GetValue()           PORTFbits.RF3
#define LED_SetDigitalInput()    do { TRISFbits.TRISF3 = 1; } while(0)
#define LED_SetDigitalOutput()   do { TRISFbits.TRISF3 = 0; } while(0)
#define LED_SetPullup()          do { WPUFbits.WPUF3 = 1; } while(0)
#define LED_ResetPullup()        do { WPUFbits.WPUF3 = 0; } while(0)
#define LED_SetPushPull()        do { ODCONFbits.ODCF3 = 0; } while(0)
#define LED_SetOpenDrain()       do { ODCONFbits.ODCF3 = 1; } while(0)
#define LED_SetAnalogMode()      do { ANSELFbits.ANSELF3 = 1; } while(0)
#define LED_SetDigitalMode()     do { ANSELFbits.ANSELF3 = 0; } while(0)

/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);


#endif // PINS_H
/**
 End of File
*/