#ifndef TERRENO_H
#define TERRENO_H

#include "Imovel.h"

class Terreno : public Imovel
{
    public:
        Terreno();

        void lerAtributos();
        void exibeAtributos();

    private:
        float area;
};

#endif // TERRENO_H
