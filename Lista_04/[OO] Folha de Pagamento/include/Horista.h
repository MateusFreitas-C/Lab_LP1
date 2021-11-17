#ifndef HORISTA_H
#define HORISTA_H

#include <Funcionario.h>

class Horista : public Funcionario
{
    public:
        Horista(double salario, double horas);
        double calcularSalario();

    private:
        double salarioPorHora;
        double horasTrabalhadas;
};

#endif // HORISTA_H
