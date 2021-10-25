#ifndef QUADRADO_H
#define QUADRADO_H

#include "FiguraGeometrica.h"

class Quadrado : public FiguraGeometrica
{
    public:
        Quadrado();

        float calcularArea();
        void lerAtributosArea();
        float lado;

    protected:

    private:
};

#endif // QUADRADO_H
