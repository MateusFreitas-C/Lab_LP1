#include <iostream>
#include "TrabalhadorPorHora.h"
#include "TrabalhadorAssalariado.h"

using namespace std;

int main()
{
    int n, tipo, horas;
    string nome;
    float valor;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> tipo;
        cin.ignore();
        getline(cin, nome);
        cin >> valor;

        if(tipo == 2){
            cin >> horas;

            TrabalhadorPorHora th = TrabalhadorPorHora(valor);
            th.setNome(nome);
            cout << th.getNome() << " - Semanal: R$ " << th.calcularPagamentoSemanal(horas) << " - Mensal: R$ " << th.getSalario() << endl;

        }else if(tipo==1){
            TrabalhadorAssalariado ta = TrabalhadorAssalariado(valor);
            ta.setNome(nome);
            cout << ta.getNome() << " - Semanal: R$ " << ta.calcularPagamentoSemanal() << " - Mensal: R$ " << ta.getSalario() << endl;

        }
    }

    return 0;
}
