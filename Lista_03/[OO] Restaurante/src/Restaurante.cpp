#include "Restaurante.h"

Restaurante::Restaurante()
{
    //ctor
}

void Restaurante::adicionarPedido(Pedido *p, int indMesa){
    mesas[indMesa].adicionarPedido(p);
}

float Restaurante::calculaTotalRestaurante(){
    float total = 0;

    for(unsigned int i = 0; i < mesas.size(); i++){
        total += mesas[i].calculaTotal();
    }

    return total;
}

MesaDeRestaurante Restaurante::getMesa(int indMesa){
    return mesas[indMesa];
}
