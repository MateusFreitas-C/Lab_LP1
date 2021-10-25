#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "FiguraGeometrica.h"

class Triangulo : public FiguraGeometrica
{
    public:
        Triangulo(int tipo);
        virtual ~Triangulo();

        float base, altura;
        float calcularArea();
        void lerAtributosArea();

    protected:

    private:
};

#endif // TRIANGULO_H
