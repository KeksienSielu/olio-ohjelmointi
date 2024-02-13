#include <iostream>
#include "kerros.h"
#include "katutaso.h"
#include "kerrostalo.h"

using namespace std;

int main()
{
    kerrostalo kTalo;
    katutaso kt;
    kerros k;

    // k.maaritaAsunnot();
    // Jätin tämän ylemmän käskyn kommentiksi, sillä mikäli se on päällä, tulostus toki näyttää samalta kuin tehtävän annossa,
    // mutta jotenkin tuntuu, että sen ei pitäisi olla edes täällä?


    double katuTasoKulutus = kt.laskeKulutus();
    double kerrosKulutus = k.laskeKulutus();
    double rakennuksenKulutus = kTalo.laskeKulutus();
    double yhteiskulutus = kerrosKulutus + katuTasoKulutus + rakennuksenKulutus;

        cout << "Katutason ja perityn kerroksen yhteinen kulutus: " << yhteiskulutus << endl;
        return 0;
}
