#include "ContaCorrente.h"

ContaCorrente::ContaCorrente(){
    saldoAtual = 0;
}

ContaCorrente::ContaCorrente(std::string nomeCliente, int numeroDaConta, double salario)
             : Conta(nomeCliente, numeroDaConta, saldoAtual)
{
    this->salario = salario;
    definirLimite();
}

double ContaCorrente::getSalario(){
    return salario;
}

void ContaCorrente::setSalario(double salario){
    this->salario = salario;
}

double ContaCorrente::getLimiteDisponivel(){
    return limiteDisponivel;
}

void ContaCorrente::setLimiteDisponivel(double limiteDisponivel){
    this->limiteDisponivel = limiteDisponivel;
}

void ContaCorrente::depositar(double valorDepositado){
    saldoAtual = saldoAtual + valorDepositado;
}

void ContaCorrente::definirLimite(){
    this->limiteDisponivel = salario * 2;
}

double ContaCorrente::saldoTotalDisponivel(){
    return saldoAtual + limiteDisponivel;
}
