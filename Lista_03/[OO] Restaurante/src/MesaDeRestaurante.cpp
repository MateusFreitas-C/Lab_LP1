#include "MesaDeRestaurante.h"
#include <iostream>

using namespace std;

MesaDeRestaurante::MesaDeRestaurante()
{
    //ctor
}

void MesaDeRestaurante::adicionarPedido(Pedido* p){

    for(unsigned int i = 0; i < pedidos.size(); i++){

        if(pedidos[i]->getDescr() == p->getDescr()){
            pedidos[i]->incQuant(p->getQuant());
            return;
        }
    }

    pedidos.push_back(p);

}

void MesaDeRestaurante::zeraPedidos(){

    for(unsigned int i = 0; i < pedidos.size(); i++){

        delete pedidos[i];
    }

    pedidos.clear();

}

float MesaDeRestaurante::calculaTotal(){
    float total = 0;

    for(unsigned int i = 0; i < pedidos.size(); i++){

        total += pedidos[i]->getTotal();
    }

    return total;
}

void MesaDeRestaurante::exibeConta(){

    for(unsigned int i = 0; i < pedidos.size(); i++){

        cout << pedidos[i]->getNumero() << " - " << pedidos[i]->getDescr() << " - " <<  pedidos[i]->getQuant() << " - " <<  pedidos[i]->getPreco() << " - R$ " << pedidos[i]->getTotal() << endl;
    }

    cout << "Total: R$ " << calculaTotal() << endl;

}
