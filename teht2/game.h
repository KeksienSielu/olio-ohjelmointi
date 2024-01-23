#ifndef GAME_H
#define GAME_H

#include <string>



class game
{
public:
    game(int maxNumber);
    ~game();
    int getRandomNumber();

    int getNumOfGuesses();
    void incrementNumOfGuesses();

    void play();

private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;

    void printGameResult();

};

#endif // GAME_H
