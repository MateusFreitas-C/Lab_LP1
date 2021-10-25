#include "Endereco.h"

Endereco::Endereco(std::string rua, int numero, std::string bairro, std::string cidade, std::string estado, std::string cep)
{
    this->rua = rua;
    this->numero = numero;
    this->bairro = bairro;
    this->cidade = cidade;
    this->estado = estado;
    this->cep = cep;
}

Endereco::Endereco()
{

}

std::string Endereco::toString(){

    return rua + ", " + std::to_string(numero) + ", " + bairro + ". " + cidade + " - " + estado + ". " + "CEP: " + cep;
}
