#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H

#include "Pedido.h"
#include <vector>

class MesaDeRestaurante
{
    public:
        MesaDeRestaurante();

        void adicionarPedido(Pedido* p);
        void zeraPedidos();
        float calculaTotal();
        void exibeConta();

    private:
        std::vector<Pedido*> pedidos;
};

#endif // MESADERESTAURANTE_H
