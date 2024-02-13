#ifndef KERROS_H
#define KERROS_H

#include "Asunto.h"

class kerros
{
public:
    kerros();
    virtual void maaritaAsunnot();
    double laskeKulutus();
    double getKerroskulutus() const { return kerroskulutus; }

private:
    Asunto as1, as2, as3, as4;
    double kerroskulutus;
};

#endif // KERROS_H

