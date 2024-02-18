/**
 * Storm Bots
 * Personal project: Chess bot using an Arduino
 * 17/02/2024 v1.0.0
*/
#include <main.h>

//Pin definitions for the 7segment display
#define A 13 
#define B 12
#define C 11
#define D 10
#define E 9
#define F 8
#define G 7
#define DP 6

uint8_t SevenSeg[] = { A, B, C, D, E, F, G, DP };

//Definition of functions
void SevenSegmentEncoder(uint8_t var);
void Loading7Seg(void);