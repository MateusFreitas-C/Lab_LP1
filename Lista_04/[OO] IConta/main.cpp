#include <iostream>
#include <string>

#include "IConta.h"
#include "Conta.h"
#include "ContaEspecial.h"

using namespace std;

int main(){

    Conta conta;
    ContaEspecial conta_especial;

    string nomeCliente;
    int numeroConta;
    float salarioMensal;
    float depositar;
    float sacar;

    getline(cin, nomeCliente);
    cin >> numeroConta;
    cin >> salarioMensal;

    conta = Conta(nomeCliente, numeroConta, salarioMensal);

    cin >> depositar;
    conta.depositar(depositar);
    cin >> sacar;
    conta.sacar(sacar);
    cin.ignore();

    cout << conta.getNome() << ", cc: " << conta.getConta() << ", salário " << conta.getSalario() << ", saldo total disponível: R$ " << conta.saldoTotalDisponivel() << endl;

    getline(std::cin, nomeCliente);
    cin >> numeroConta;
    cin >> salarioMensal;
    cin.ignore();

    conta_especial = ContaEspecial(nomeCliente, numeroConta, salarioMensal);

    cin >> depositar;
    conta_especial.depositar(depositar);
    cin >> sacar;
    conta_especial.sacar(sacar);
    cin.ignore();

    cout << conta_especial.getNome() << ", cc: " << conta_especial.getConta() << ", salário " << conta_especial.getSalario() << ", saldo total disponível: R$ " << conta_especial.saldoTotalDisponivel() << endl;


    return 0;
}
