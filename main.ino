/**
 * Storm Bots
 * Personal project: Chess bot using an Arduino
 * 21/02/2024 v1.0.0
*/

#include <main.h>
#include <7SegmentDisplay.h>
#include <SDCard.h>

void setup() {
  //Setup for the 7 segment display
  for(int i = 0; i < 8; i++)
    pinMode(SevenSeg, OUTPUT);

  //Setup for the SD card module
  pinMode(CS_PIN, OUTPUT);
  pinMode(SCK_PIN, OUTPUT);
  pinMode(MOSI_PIN, OUTPUT);
  pinMode(MISO_PIN, OUTPUT);

  if(!SD.begin())
  {
    Serial.println("Setup failed...");
    return; //Breaks out of the setup
  }
}

//main
void loop() {


}
