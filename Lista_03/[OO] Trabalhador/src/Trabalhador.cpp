#include "Trabalhador.h"

Trabalhador::Trabalhador()
{
    salario = 0;
}

string Trabalhador::getNome(){
    return nome;
}

float Trabalhador::getSalario(){
    return salario;
}

void Trabalhador::setNome(string n){
    nome = n;
}

void Trabalhador::setSalario(float s){
    salario = s;
}
