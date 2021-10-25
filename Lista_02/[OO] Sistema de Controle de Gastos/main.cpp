#include <iostream>
#include "ControleDeGastos.h"
#include "Despesa.h"

using namespace std;

int main(){
    int n;
    string nome, tipo;
    float valor;

    cin >> n;

    ControleDeGastos controle;

    for(int i = 0; i < n; i++){
        getline(cin.ignore(), nome);
        cin >> valor;
        getline(cin,tipo);

        Despesa d1;
        d1.setNome(nome);
        d1.setTipo(tipo);
        d1.setValor(valor);

        controle.setDespesa(d1, i);

    }

    cin >> tipo;

    if(controle.existeDespesaDoTipo(tipo) == false){
        cout << "Nenhuma despesa do tipo especificado" << endl;

    }else{

        for(int i = 0; i < 100; i++){

            if(controle.getDespesa(i).getTipo() == tipo){
                cout << controle.getDespesa(i).getNome() << ", R$ " << controle.getDespesa(i).getValor() << endl;
            }
        }
    }

    cout << "Total: " << controle.calculaTotalDeDespesas(tipo) << "/" << controle.calculaTotalDeDespesas() << endl;

    return 0;
}
