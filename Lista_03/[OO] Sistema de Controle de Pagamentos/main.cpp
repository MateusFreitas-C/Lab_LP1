#include <iostream>
#include "Pagamento.h"
#include "ControleDePagamentos.h"

using namespace std;

int main(){
    int quant, indice;
    ControleDePagamentos controle;
    Pagamento pag;
    string nome;
    float valor;

    cin >> quant;

    for(int i = 0; i < quant; i++){
        cin >> valor;
        getline(cin.ignore(), nome);

        pag.setNomeDoFuncionario(nome);
        pag.setValorPagamento(valor);

        controle.setPagamento(pag, i);
    }

    getline(cin, nome);
    indice = controle.getIndexFuncionario(nome);

    if (indice != -1){
        cout << controle.getPagamento(indice).getNomeDoFuncionario()<< ": R$ " << controle.getPagamento(indice).getValorPagamento() << endl;
    }
    else {
        cout << nome << " não encontrado(a)." << endl;
    }
    cout << "Total: R$ " << controle.calculaTotalDePagamentos() << endl;

    return 0;
}
