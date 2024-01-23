#include "game.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

game::game(int maxNumber)
{
    this->maxNumber = maxNumber;
    cout << "Chosen number is: " << this->maxNumber << endl;
    srand(time(0));
    numOfGuesses = 0;
}

int game::getRandomNumber()
{
    return rand() % maxNumber+1;
}

void game::play()
{
    bool gameOver = false;
    randomNumber = game::getRandomNumber();

    while (!gameOver)
    {
        int guess;
        cout << "Guess my number between 1 - " << maxNumber << endl;
        cin >> guess;
        incrementNumOfGuesses();
        if (guess < randomNumber)
        {
            cout << "Your guess is too small!" << endl;
        }
        else if (guess > randomNumber)
        {
            cout << "Your guess is too high!" << endl;
        }
        else if (guess == randomNumber)
        {
            cout << "Correct!" << endl;
            printGameResult();
            gameOver = true;
        }
    }
}

int game::getNumOfGuesses()
{
    return numOfGuesses;
}

void game::incrementNumOfGuesses()
{
    game::getNumOfGuesses();
    numOfGuesses++;
}

void game::printGameResult()
{
    int guessAmount = game::getNumOfGuesses();

    cout << "Your guess was correct!" << endl;
    cout << "The correct number was: " << randomNumber << endl;
    cout << "You guessed " << guessAmount << " times in total." << endl;
}

game::~game()
{
    cout << "GAME DESTRUCTOR: object cleared from stack memory" << endl;
}
