#include <iostream>

#include "ContaEspecial.h"
#include "ContaCorrente.h"
#include "Poupanca.h"
#include "Conta.h"

using namespace std;

int main(){

    ContaCorrente corrente;
    ContaEspecial especial;
    Poupanca poupanca;

    string nomeCliente;
    int numeroDaConta;
    double salario;
    double saque, deposito;

    getline(cin, nomeCliente);
    cin >> numeroDaConta >> salario >> deposito >> saque;
    cin.ignore();
    corrente = ContaCorrente(nomeCliente, numeroDaConta, salario);
    cout << corrente.getNomeCliente() << ", cc: " << corrente.getNumeroDaConta() << ", salário " << corrente.getSalario() << ", " ;
    corrente.depositar(deposito);
    corrente.sacar(saque);
    cout << "saldo total disponível: R$ " << corrente.saldoTotalDisponivel() << endl;

    getline(cin, nomeCliente);
    cin >>  numeroDaConta >> salario >> deposito >> saque;
    cin.ignore();
    especial = ContaEspecial(nomeCliente, numeroDaConta, salario);
    cout << especial.getNomeCliente() << ", cc: " << especial.getNumeroDaConta() << ", salário " << especial.getSalario() << ", ";
    especial.depositar(deposito);
    especial.sacar(saque);
    cout << "saldo total disponível: R$ " << especial.saldoTotalDisponivel() << endl;

    getline(cin, nomeCliente);
    cin >>  numeroDaConta >> deposito >> saque;
    poupanca = Poupanca(nomeCliente, numeroDaConta, 0, 0, 0.006);
    poupanca.depositar(deposito);
    poupanca.sacar(saque);
    cout << poupanca.getNomeCliente() << ", cc: " << poupanca.getNumeroDaConta() << ", saldo total disponível: R$ " << poupanca.saldoTotalDisponivel() << endl;

    return 0;
}
