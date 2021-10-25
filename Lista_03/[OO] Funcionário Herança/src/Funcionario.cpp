#include "Funcionario.h"

Funcionario::Funcionario()
{

}

std::string Funcionario::getMatricula(){
    return matricula;
}

std::string Funcionario:: getNome(){
    return nome;
}

float Funcionario::getSalario(){
    return salario;
}

void Funcionario::setMatricula(std::string m){
    matricula = m;
}

void Funcionario::setNome(std::string n){
    nome = n;
}

void Funcionario::setSalario(float s){
    salario = s;
}
