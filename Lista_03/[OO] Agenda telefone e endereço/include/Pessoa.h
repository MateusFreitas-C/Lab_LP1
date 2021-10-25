#ifndef PESSOA_H
#define PESSOA_H

#include "Endereco.h"
#include <string>

class Pessoa
{
    public:
        Pessoa(std::string nome);
        Pessoa(std::string nome, Endereco adress, std::string telefone);
        Pessoa();

        std::string toString();

    protected:

    private:
        std::string nome, telefone;
        Endereco adress;
};

#endif // PESSOA_H
