/**
 * Storm Bots
 * Personal project: Chess bot using an Arduino
 * 21/02/2024 v1.0.0
*/
#include <SDCard.h>
#include <SPI.h>
#include <SD.h> 

void SaveGame(char GameArray[], int GameMovesNumber)
{
    File GameFile;

    GameFile = SD.open("GameFile.txt", FILE_WRITE);
    if(GameFile) //if the GameFile opened correctly
    {
        for(int i = 0; i < GameMovesNumber; i++)
            GameFile.println(GameArray[i]);
        GameFile.close();
    }
}

void PlayerDatabase(char PlayerID)
{
    File PlayerFile;

    PlayerFile = SD.open("PDatabase.txt", FILE_WRITE);
    if(PlayerFile)
    {

        PlayerFile.close();
    }
}