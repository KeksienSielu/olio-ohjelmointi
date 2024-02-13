#include "asunto.h"
#include <iostream>
using namespace std;

#include "asunto.h"

void Asunto::maarita(int a, int b)
{
    asukasMaara = b;
    neliot = a;
    cout << "Asunto maaritetty, asukkaita: " << asukasMaara << " nelioita: " << neliot << endl;
}

double Asunto::laskeKulutus()
{
    double kulutus = 0;
    kulutus += neliot * asukasMaara;
    return kulutus;
}
