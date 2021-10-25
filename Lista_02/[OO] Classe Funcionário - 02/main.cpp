#include <iostream>
#include <string>
#include "Funcionario.h"

using namespace std;

int main(){
    int n;
    float salario;
    string nome, sobrenome;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> nome;
        cin >> sobrenome;
        cin >> salario;

        Funcionario func(nome, sobrenome, salario);

        cout << func.getNome() << " " << func.getSobrenome() << " - " << func.getSalario() << " - " << func.getSalarioAnual() << endl;
        func.aumentaSalario(1.1);
    }



    return 0;
}
