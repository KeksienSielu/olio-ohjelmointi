#ifndef KATUTASO_H
#define KATUTASO_H

#include "asunto.h"

class katutaso
{
public:
    katutaso();
    void maaritaAsunnot();
    double laskeKulutus();
    double getKatuTasoKulutus() const { return katuTasoKulutus; }

private:
    Asunto as1, as2;
    double katuTasoKulutus;
};

#endif // KATUTASO_H
