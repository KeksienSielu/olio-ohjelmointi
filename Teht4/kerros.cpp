#include "kerros.h"
#include "asunto.h"

using namespace std;

kerros::kerros()
{
    cout << "Kerros luotu" << endl;
}

void kerros::maaritaAsunnot()
{
    cout << "Maaritetaan kerros asuntoja..." << endl;
    as1.maarita(100,2);
    as2.maarita(100,2);
    as3.maarita(100,2);
    as4.maarita(100,2);
}

double kerros::laskeKulutus()
{
    kerroskulutus = 0;
    kerroskulutus += as1.laskeKulutus();
    kerroskulutus += as2.laskeKulutus();
    kerroskulutus += as3.laskeKulutus();
    kerroskulutus += as4.laskeKulutus();

    cout << "Kerrosten yhteinen kulutus = " << kerroskulutus << endl;

    return kerroskulutus;
}
