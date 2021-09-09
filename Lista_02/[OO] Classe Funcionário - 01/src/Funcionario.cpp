#include "Funcionario.h"

Funcionario::Funcionario()
{
    //ctor
}

float Funcionario::getSalarioAnual(){

    return salario_mensal * 12;
}
