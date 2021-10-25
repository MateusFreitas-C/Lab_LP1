#ifndef RETANGULO_H
#define RETANGULO_H

#include "FiguraGeometrica.h"

class Retangulo : public FiguraGeometrica
{
    public:
        Retangulo();

        float calcularArea();
        void lerAtributosArea();

        float l1, l2;

    protected:

    private:
};

#endif // RETANGULO_H
