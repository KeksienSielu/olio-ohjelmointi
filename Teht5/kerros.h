#ifndef KERROS_H
#define KERROS_H


class kerros
{
public:
    kerros();
    virtual void maaritaAsunnot();
    double laskeKulutus();
    double getKerroskulutus() const { return kerroskulutus; }

private:
    double kerroskulutus;
};

#endif // KERROS_H

