/**
 * Storm Bots
 * Personal project: Chess bot using an Arduino
 * 21/02/2024 v1.0.0
*/
#include <main.h>
//Pin definition for the SD card module
#define CS_PIN 5    //Chip Select
#define SCK_PIN 4   //Serial Clock
#define MOSI_PIN 3  //Master Out Slave In
#define MISO_PIN 2  //Master In Slave Out

void SaveGame(void);