#ifndef KERROSTALO_H
#define KERROSTALO_H

#include "katutaso.h"
#include "kerros.h"



class kerrostalo
{
public:
    kerrostalo();
    double laskeKulutus();
    double getkerrosTaloKulutus() const { return kerrosTaloKulutus; }

private:
    katutaso eka;
    kerros toka, kolmas;
    double kerrosTaloKulutus;
};

#endif // KERROSTALO_H
