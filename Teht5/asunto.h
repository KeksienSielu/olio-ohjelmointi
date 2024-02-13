#ifndef ASUNTO_H
#define ASUNTO_H
#include <iostream>
using namespace std;

class Asunto {
public:
    int neliot;
    int asukasMaara;
    Asunto() : asukasMaara(0), neliot(0)
    {
        cout << "Asunto luotu" << endl;
    }
    void maarita(int a, int b);

    double laskeKulutus();

};


#endif // ASUNTO_H
