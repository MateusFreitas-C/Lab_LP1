#include "TrabalhadorAssalariado.h"

TrabalhadorAssalariado::TrabalhadorAssalariado(float sal)
{
    salario = sal;
}

float TrabalhadorAssalariado::calcularPagamentoSemanal(){
    return salario / 4;
}
