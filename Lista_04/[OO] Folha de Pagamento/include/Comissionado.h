#ifndef COMISSIONADO_H
#define COMISSIONADO_H


#include <Funcionario.h>

class Comissionado : public Funcionario
{
    public:
        Comissionado(double vendas, double comissao);
        double calcularSalario();

    private:
        double vendasMensais;
        double percentualComissao;
};

#endif // COMISSIONADO_H
