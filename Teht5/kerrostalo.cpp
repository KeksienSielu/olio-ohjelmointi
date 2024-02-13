#include "katutaso.h"
#include "kerros.h"
#include "kerrostalo.h"
#include <iostream>
using namespace std;

katutaso* eka = new katutaso;
kerros* toka = new kerros;
kerros* kolmas = new kerros;

kerrostalo::kerrostalo()
{
    cout << "Kerrostalo luotu" << endl;
}

void kerrostalo::maaritaKerrostalo()
{
    cout << "Maaritellaan koko kerrostalon kaikki asunnot..." << endl;
    eka->maaritaAsunnot();
    toka->maaritaAsunnot();
    kolmas->maaritaAsunnot();
}

double kerrostalo::laskeKulutus()
{
    double kerrosTaloKulutus = 0;
    kerrosTaloKulutus += eka->laskeKulutus();
    kerrosTaloKulutus += toka->laskeKulutus();
    kerrosTaloKulutus += kolmas->laskeKulutus();

    cout << "Kerrostalon kokonainen kulutus: " << kerrosTaloKulutus << endl;
    return kerrosTaloKulutus;
    delete eka;
    delete toka;
    delete kolmas;

}
