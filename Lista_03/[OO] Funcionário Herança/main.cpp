#include <iostream>
#include "Funcionario.h"
#include "Consultor.h"

using namespace std;

int main(){

    Funcionario func;
    Consultor cons;
    string matricula, nome;
    float salario;

    cin >> matricula;
    func.setMatricula(matricula);

    getline(cin.ignore(), nome);
    func.setNome(nome);

    cin >> salario;
    func.setSalario(salario);


    cin >> matricula;
    cons.setMatricula(matricula);

    getline(cin.ignore(), nome);
    cons.setNome(nome);

    cin >> salario;
    cons.setSalario(salario);

    cout << func.getMatricula() << " - " << func.getNome() << " - R$ " << func.getSalario() << endl;

    cout << cons.getMatricula() << " - " << cons.getNome() << " - R$ " << cons.getSalario() << endl;

    return 0;
}
