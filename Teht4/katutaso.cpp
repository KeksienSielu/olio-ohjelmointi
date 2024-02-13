#include "katutaso.h"
#include <iostream>

using namespace std;

katutaso::katutaso()
{
    cout << "Katutaso luotu" << endl;
}

void katutaso::maaritaAsunnot()
{
    cout << "Maaritetaan katutason asuntoja..." << endl;
    as1.maarita(100,2);
    as2.maarita(100,2);
}

double katutaso::laskeKulutus()
{
    double katuTasoKulutus = 0;
    katuTasoKulutus += as1.laskeKulutus();
    katuTasoKulutus += as2.laskeKulutus();
    cout << "Katutason yhteinen kulutus = " << katuTasoKulutus << endl;

    return katuTasoKulutus;
}
