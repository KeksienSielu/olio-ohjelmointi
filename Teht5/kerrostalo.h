#ifndef KERROSTALO_H
#define KERROSTALO_H

class kerrostalo
{
public:
    kerrostalo();
    double laskeKulutus();
    double getkerrosTaloKulutus() const { return kerrosTaloKulutus; }
    void maaritaKerrostalo();

private:
    double kerrosTaloKulutus;
};

#endif // KERROSTALO_H
