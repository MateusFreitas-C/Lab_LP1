#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

#include <string>

class FiguraGeometrica
{
    public:
        FiguraGeometrica(int tipo);
        virtual ~FiguraGeometrica();

        float calcularArea();
        void lerAtributosArea();
        std::string getNome();

    protected:
        std::string nome;
        int tipo;

    private:
};

#endif // FIGURAGEOMETRICA_H
