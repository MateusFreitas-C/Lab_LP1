#include "Despesa.h"

Despesa::Despesa()
{
    valor = 0;
}

std::string Despesa::getNome(){
    return nome;
}

std:: string Despesa::getTipo(){
    return tipo;
}

float Despesa::getValor(){
    return valor;
}

void Despesa::setNome(std::string nome){
    this->nome = nome;
}

void Despesa::setTipo(std::string tipo){
    this->tipo = tipo;
}

void Despesa::setValor(float valor){
    this->valor = valor;
}
