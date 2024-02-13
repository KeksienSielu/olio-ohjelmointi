#include "katutaso.h"
#include <iostream>
#include "asunto.h"

using namespace std;


Asunto* ptr1 = new Asunto;
Asunto* ptr2 = new Asunto;

katutaso::katutaso()
{
    cout << "Katutaso luotu" << endl;
}

void katutaso::maaritaAsunnot()
{
    cout << "Maaritetaan katutason asuntoja..." << endl;
    ptr1->maarita(100,2);
    ptr2->maarita(100,2);
}

double katutaso::laskeKulutus()
{
    double katuTasoKulutus = 0;
    katuTasoKulutus += ptr1->laskeKulutus();
    katuTasoKulutus += ptr2->laskeKulutus();
    cout << "Katutason yhteinen kulutus = " << katuTasoKulutus << endl;
    delete ptr1;
    delete ptr2;

    return katuTasoKulutus;
}
