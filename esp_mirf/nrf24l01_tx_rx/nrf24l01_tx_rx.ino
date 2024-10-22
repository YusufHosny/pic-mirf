//Include Libraries
#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
#include "printf.h"

//create an RF24 object
RF24 radio(9, 10);  // CE, CSN

//address through which two modules communicate.
const byte address[6] = {0xe1, 0xe1, 0xe1, 0xe1, 0xe1};

void setup()
{
  Serial.begin(115200);
  printf_begin();
  Serial.println(F("\n\rRF24/examples/scanner/"));

  // Setup and configure rf radio
  radio.begin();
  radio.setAutoAck(false);

  // //set the address
  // radio.openWritingPipe(address);
  // radio.setPALevel(RF24_PA_MIN); //set as: RF24_PA_MIN, RF24_PA_LOW, RF24_PA_HIGH, RF24_PA_MAX
  // radio.setDataRate(RF24_2MBPS); //set as: F24_250KBPS, F24_1MBPS, F24_2MBPS ==>250KBPS = longest range
  // radio.setChannel(115); //sets channel from 2.4 to 2.524 GHz in 1 MHz increments 2.483.5 GHz is normal legal limit
  // radio.setCRCLength(RF24_CRC_8);

  // radio.printDetails();


  // //Set module as transmitter
  // radio.stopListening();


  radio.openReadingPipe(0, address);
  radio.setPALevel(RF24_PA_MIN); //set as: RF24_PA_MIN, RF24_PA_LOW, RF24_PA_HIGH, RF24_PA_MAX
  radio.setDataRate(RF24_2MBPS); //set as: F24_250KBPS, F24_1MBPS, F24_2MBPS ==>250KBPS = longest range
  radio.setChannel(115); //sets channel from 2.4 to 2.524 GHz in 1 MHz increments 2.483.5 GHz is normal legal limit
  radio.setCRCLength(RF24_CRC_8);


  // Get into standby mode
  radio.startListening();
  radio.stopListening();

  radio.printDetails();

  // Get into standby mode
  radio.startListening();

}


int val=0;

void loop()
{

  // //Send message to receiver
  // char text[32] = {0};
  // sprintf(text, "Hello PIC18 %d", val++);
  // radio.write(&text, sizeof(text));
  // Serial.println(text);


  //Read the data if available in buffer
  if (radio.available())
  {
    char text[32] = {0};
    radio.read(&text, sizeof(text));
    Serial.println(text);
  }
  

delay(250);
}
