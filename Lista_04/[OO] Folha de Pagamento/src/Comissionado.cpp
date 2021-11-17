#include "Comissionado.h"

Comissionado::Comissionado(double vendas, double comissao)
{
    vendasMensais = vendas;
    percentualComissao = comissao;
}

double Comissionado::calcularSalario(){
    return percentualComissao * vendasMensais;
}
