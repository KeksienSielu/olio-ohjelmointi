#ifndef KATUTASO_H
#define KATUTASO_H

class katutaso
{
public:
    katutaso();
    void maaritaAsunnot();
    double laskeKulutus();
    double getKatuTasoKulutus() const { return katuTasoKulutus; }

private:
    double katuTasoKulutus;
};

#endif // KATUTASO_H
