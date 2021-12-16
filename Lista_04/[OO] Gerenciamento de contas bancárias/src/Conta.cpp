#include "Conta.h"
#include <iostream>

Conta::Conta(){
    saldoAtual = 0;
    numeroDaConta = 0;
    nomeCliente = "-";
}

Conta::Conta(std::string nomeCliente, int numeroDaConta, double saldoAtual){
    this->nomeCliente = nomeCliente;
    this->numeroDaConta = numeroDaConta;
    this->saldoAtual = saldoAtual;
}

std::string Conta::getNomeCliente(){
    return nomeCliente;
}

int Conta::getNumeroDaConta(){
    return numeroDaConta;
}

double Conta::getSaldoAtual(){
    return saldoAtual;
}

void Conta::setNomeCliente(std::string nomeCliente){
    this->nomeCliente = nomeCliente;
}

void Conta::setNumeroDaConta(int numeroDaConta){
    this->numeroDaConta = numeroDaConta;
}

void Conta::setSaldoAtual(double saldoAtual){
    this->saldoAtual = saldoAtual;
}

void Conta::sacar(double valor){
    if (valor < saldoAtual){
        this->saldoAtual -= valor;
    }else{
        std::cout << "\nsaldo insuficiente" << std::endl;
    }
}

void Conta::depositar(double valor){
    saldoAtual += valor;
}

double Conta::saldoTotalDisponivel(){
    return saldoAtual;
}

