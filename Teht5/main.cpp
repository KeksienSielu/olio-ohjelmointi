#include <iostream>
#include "kerros.h"
#include "katutaso.h"
#include "kerrostalo.h"

using namespace std;

int main()
{
    kerrostalo* kTalo = new kerrostalo;
    kTalo->maaritaKerrostalo();

    kerros* k = new kerros;
    katutaso* kt = new katutaso;

    double katuTasoKulutus = kt->laskeKulutus();
    double kerrosKulutus = k->laskeKulutus();
    double rakennuksenKulutus = kTalo->laskeKulutus();
    double yhteiskulutus = kerrosKulutus + katuTasoKulutus + rakennuksenKulutus;

        cout << "Katutason ja perityn kerroksen yhteinen kulutus: " << yhteiskulutus << endl;

    delete kTalo;
    delete kt;
    delete k;

        return 0;
}
