#include "chef.h"
#include <iostream>

Chef::Chef(string n)
{
    name = n;
    cout << "Chef " << name << " konstruktori..." << endl;
}

void Chef::makeSalad()
{
    cout << "Chef " << name << " makes salad!" << endl;
}

void Chef::makeSoup()
{
    cout << "Chef " << name << " makes soup!" << endl;
}

ItalianChef::ItalianChef(string n, int a, int b) : Chef(n)
{
    name = n;
    jauhot = a;
    vesi = b;

    cout << "Chef " << name << " konstruktori..." << endl;
}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta()
{
    cout << "Chef " << getName() << " makes pasta with a special recipe!" << endl;
    cout << "Chef " << name << " used jauhot = " << jauhot << endl;
    cout << "Chef " << name << " used vesi = " << vesi << endl;
    cout << "...It's delicious!" << endl;
}
