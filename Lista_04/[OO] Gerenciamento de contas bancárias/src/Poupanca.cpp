#include "Poupanca.h"

Poupanca::Poupanca()
        : Conta()
{
    variacao = 0;
    taxaDeRendimento = 0.006;
}

Poupanca::Poupanca(std::string nomeCliente, int numeroDaConta, double saldoAtual, int variacao, double taxaDeRendimento)
        : Conta(nomeCliente, numeroDaConta, saldoAtual)
{
    this->variacao = variacao;
    this->taxaDeRendimento = taxaDeRendimento;

}

int Poupanca::getVariacao(){
    return variacao;
}

double Poupanca::getTaxaDeRendimento(){
    return taxaDeRendimento;
}

void Poupanca::setVariacao(int variacao){
    this->variacao = variacao;
}

void Poupanca::setTaxaDeRendimento(double TaxaDeRendimento){
    this->taxaDeRendimento = taxaDeRendimento;
}

double Poupanca::render(){
    return saldoAtual * taxaDeRendimento;
}

double Poupanca::saldoTotalDisponivel(){
    return saldoAtual + render();
}
