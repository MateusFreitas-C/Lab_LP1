#ifndef APARTAMENTO_H
#define APARTAMENTO_H

#include "Imovel.h"

class Apartamento : public Imovel
{
    public:
        Apartamento();

        void lerAtributos();
        void exibeAtributos();

    private:
        int andar, nQuartos, nGaragem;
        float area, vCond;
};

#endif // APARTAMENTO_H
