#include "chef.h"
#include <iostream>

using namespace std;

int main()
{
    Chef chef("Mario");
    ItalianChef italianChef("Luigi", 250, 100);
    chef.makeSalad();
    chef.makeSoup();
    italianChef.makePasta();
    return 0;
}
