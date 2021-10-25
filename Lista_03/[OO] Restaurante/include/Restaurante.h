#ifndef RESTAURANTE_H
#define RESTAURANTE_H

#include <vector>
#include "MesaDeRestaurante.h"

class Restaurante
{
    public:
        Restaurante();

        void adicionarPedido(Pedido* p, int indMesa);
        float calculaTotalRestaurante();
        MesaDeRestaurante getMesa(int indMesa);

    private:
        std::vector<MesaDeRestaurante> mesas = std::vector<MesaDeRestaurante>(10);
};

#endif // RESTAURANTE_H
