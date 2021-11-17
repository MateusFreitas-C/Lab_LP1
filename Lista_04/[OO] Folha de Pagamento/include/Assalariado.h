#ifndef ASSALARIADO_H
#define ASSALARIADO_H

#include <Funcionario.h>

class Assalariado : public Funcionario
{
    public:
        Assalariado(double sal);

        double calcularSalario();

    protected:
        double salario;
};

#endif // ASSALARIADO_H
