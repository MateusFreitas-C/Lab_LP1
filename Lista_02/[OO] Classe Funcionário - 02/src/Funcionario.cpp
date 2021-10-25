#include "Funcionario.h"
#include <iostream>

Funcionario::Funcionario()
{
    //ctor
}

Funcionario::Funcionario(std::string n, std::string s, float sm)
{
    setNome(n);
    setSobrenome(s);
    setSalario(sm);
}

float Funcionario::getSalarioAnual(){

    return salario_mensal * 12;
}

void Funcionario::setNome(std::string n){
    nome = n;
}

void Funcionario::setSobrenome(std:: string sn){
    sobrenome = sn;
}

void Funcionario::setSalario(float salario){
    salario_mensal = salario;
}

std::string Funcionario::getNome(){
    return nome;
}

std::string Funcionario::getSobrenome(){
    return sobrenome;
}

float Funcionario::getSalario(){
    return salario_mensal;
}

void Funcionario::aumentaSalario(float percent){
    std::cout << getSalarioAnual() * percent << std::endl;
}
