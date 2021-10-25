#include "Pessoa.h"

Pessoa::Pessoa(std::string nome)
{
    this->nome = nome;
}

Pessoa::Pessoa(std::string nome, Endereco adress, std::string telefone){
    this->nome = nome;
    this->adress = adress;
    this->telefone = telefone;
}

Pessoa::Pessoa(){

}

std::string Pessoa::toString(){
    return nome + ", " + telefone + "\n" + adress.toString();
}
