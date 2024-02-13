#include "kerrostalo.h"

kerrostalo::kerrostalo()
{
    cout << "Kerrostalo luotu" << endl;
    cout << "Maaritellaan koko kerrostalon kaikki asunnot..." << endl;
    eka.maaritaAsunnot();
    toka.maaritaAsunnot();
    kolmas.maaritaAsunnot();
}

double kerrostalo::laskeKulutus()
{
    double kerrosTaloKulutus = 0;
    kerrosTaloKulutus += eka.laskeKulutus();
    kerrosTaloKulutus += toka.laskeKulutus();
    kerrosTaloKulutus += kolmas.laskeKulutus();

    cout << "Kerrostalo kokonainen kulutus: " << kerrosTaloKulutus << endl;
    return kerrosTaloKulutus;
}
