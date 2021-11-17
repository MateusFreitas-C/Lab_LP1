#include "Pedido.h"
#include <sstream>

Pedido::Pedido(float valor, int quant)
{
    valorUnitario = valor;
    qtde = quant;
}

float Pedido::getTotal()
{
    return valorUnitario * qtde;
}

std::string Pedido::toString()
{
    std::stringstream sout;

    sout << "R$ " << valorUnitario << ", quant: " << qtde << ", total: R$ " << getTotal();

    return sout.str();
}
