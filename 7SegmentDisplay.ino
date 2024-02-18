/**
 * Storm Bots
 * Personal project: Chess bot using an Arduino
 * 17/02/2024 v1.0.0
*/
#include <main.h>
#include <7SegmentDisplay.h>

//Main function of the 7seg to put the byte value to an output on the module
void SevenSegmentEncoder(uint8_t var)
{
    for(int i = 0; i < 8; i++)
    {
        bool BitSet = ((var >> i) & 1);  //Compares a bit with logical "and"
        digitalWrite(SevenSeg[i], BitSet);
    }
}

void Loading7Seg(void)
{
    SevenSegmentEncoder(0b10000000) //segment a
    SevenSegmentEncoder(0b01000000) //segment b
    SevenSegmentEncoder(0b00000010) //segment g
    SevenSegmentEncoder(0b00001000) //segment e
    SevenSegmentEncoder(0b00010000) //segment d
    SevenSegmentEncoder(0b00100000) //segment c
    SevenSegmentEncoder(0b10000000) //segment g
    SevenSegmentEncoder(0b10000000) //segment f
}