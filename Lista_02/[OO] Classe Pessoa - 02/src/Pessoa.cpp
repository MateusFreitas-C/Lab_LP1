#include "Pessoa.h"

Pessoa::Pessoa()
{
    //ctor
}

Pessoa::Pessoa(string nome){
    this -> nome = nome;
}

Pessoa::Pessoa(string nome, int idade, string telefone){
    this -> nome = nome;
    this -> idade = idade;
    this -> telefone = telefone;
}

string Pessoa::getNome(){
    return nome;
}

int Pessoa::getIdade(){
    return idade;
}

string Pessoa::getFone(){
    return telefone;
}


void Pessoa::setNome(string nome){
    this->nome = nome;
}

void Pessoa::setIdade(int idade){
    this->idade = idade;
}

void Pessoa::setFone(string telefone){
    this->telefone = telefone;
}
