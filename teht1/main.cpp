#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


// Muistin liian myöhään, että kannattaisi kirjoittaa kaikki englanniksi, sillä ä ja ö ym. kirjaimet eivät toimi.
// Ensi tehtävästä eteenpäin siten englanniksi!

int game(int maxnum)
{
    bool gameOver = false;

    int arvattavaluku;
    int arvaus;

    int yritykset = 0;

    srand(10);
    arvattavaluku = rand() % maxnum;
    while(!gameOver) {
        cout << "Arvaa lukuni väliltä 0 - 20!" << endl;
        cin >> arvaus;
        yritykset++;
        if (arvaus < arvattavaluku)
        {
            cout << "Luku on suurempi!" << endl;
        }
            else if (arvaus > arvattavaluku)
            {
                cout << "Luku on pienempi!" << endl;
            }
                else if (arvaus == arvattavaluku)
                {
                    cout << "Voitit pelin!" << endl;
                    cout << "Arvaustesi määrä: " << yritykset << endl;
                    gameOver = true;
                }

    }
    return 0;
}
int main()
{
    int maxnum;
    cout << "Anna korkein etsittävä luku. Mitä suurempi luku, sitä vaikeampi peli!" << endl;
    cin >> maxnum;
    game(maxnum);
    return 0;
}
