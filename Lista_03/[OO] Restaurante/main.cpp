#include <iostream>
#include "MesaDeRestaurante.h"
#include "Pedido.h"
#include "Restaurante.h"

using namespace std;

int main(){
    Pedido pedidos[100];
    Restaurante restaurante;
    MesaDeRestaurante mesa;

    int numero=1, i = 0;
    int indiceMesa;
    string descricao;
    int quantidade;
    float preco;

    while(true){
        cin >> numero;
        if(numero <= 0){
            break;
        }
        cin.ignore();
        getline(cin, descricao);
        cin >> quantidade;
        cin >> preco;
        cin >> indiceMesa;

        pedidos[i] = Pedido(numero, descricao, quantidade, preco);
        restaurante.adicionarPedido(&pedidos[i], indiceMesa);
        i++;
    }

    for(int i = 0; i < 10; i++){

        mesa = restaurante.getMesa(i);
        if(mesa.calculaTotal() > 0){
            cout << "Mesa " << i << endl;
            mesa.exibeConta();
            cout << "\n";
        }
    }

    cout << "Total Restaurante: R$ " << restaurante.calculaTotalRestaurante() << endl;

    return 0;
}
