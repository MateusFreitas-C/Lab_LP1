#ifndef PEDIDO_H
#define PEDIDO_H

#include <string>

class Pedido
{
    public:
        Pedido(float valor, int quant);
        float getTotal();
        std::string toString();

    private:
        float valorUnitario;
        int qtde;
};

#endif // PEDIDO_H
