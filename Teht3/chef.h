#ifndef CHEF_H
#define CHEF_H

#include <iostream>
#include <string>
using namespace std;

class Chef
{
protected:
    string name;

public:
    Chef(string n);

    void makeSalad();

    void makeSoup();

    ~Chef()
    {
        cout << "Chef " << name << " destruktori" << endl;
    }
};

class ItalianChef : public Chef
{
private:
    int vesi;
    int jauhot;
public:
    ItalianChef(string, int a, int b);
    string getName();
    void makePasta();
};

#endif // CHEF_H
