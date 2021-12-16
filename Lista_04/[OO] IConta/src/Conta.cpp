#include "Conta.h"

Conta::Conta(){
    saldo = 0;
}

Conta::Conta(std::string nomeCliente, int numeroConta, float salarioMensal){
    this->nomeCliente = nomeCliente;
    this->numeroConta = numeroConta;
    this->salarioMensal = salarioMensal;
    definirLimite();
}

void Conta::definirLimite(){
    limite = 2*salarioMensal;
}

void Conta::sacar(double valor){
    saldo = saldo - valor;
}

void Conta::depositar(double valor){
    saldo = saldo + valor;
}

float Conta::saldoTotalDisponivel(){
    return saldo+limite;
}

std::string Conta::getNome(){
    return nomeCliente;
}
int Conta::getConta(){
    return numeroConta;
}
float Conta::getSalario(){
    return salarioMensal;
}
float Conta::getSaldo(){
    return saldo;
}
float Conta::getLimite(){
    return limite;
}

void Conta::setNome(std::string nome){
    nomeCliente = nome;
}
void Conta::setConta(int numero){
    numeroConta = numero;
}
void Conta::setSalario(float salario){
    salarioMensal = salario;
}
void Conta::setSaldo(float saldo){
    this->saldo = saldo;
}
void Conta::setLimite(float limite){
    this->limite = limite;
}
