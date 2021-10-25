#include "Pagamento.h"

Pagamento::Pagamento()
{
    valorPagamento = 0;
}

std::string Pagamento::getNomeDoFuncionario(){
    return nomeDoFuncionario;
}

float Pagamento::getValorPagamento(){
    return valorPagamento;
}


void Pagamento::setNomeDoFuncionario(std::string nome){
    nomeDoFuncionario = nome;
}

void Pagamento::setValorPagamento(float valor){

    if (valor >= 0){
        valorPagamento = valor;
    }
}
