#ifndef CASA_H
#define CASA_H

#include "Imovel.h"

class Casa : public Imovel
{
    public:
        Casa();

        void lerAtributos();
        void exibeAtributos();

    protected:

    private:
        int nPav, nQuartos;
        float areaTerreno, areaConstruida;
};

#endif // CASA_H
