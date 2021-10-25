#ifndef ENDERECO_H
#define ENDERECO_H

#include <string>

class Endereco
{
    public:
        Endereco(std::string rua, int numero, std::string bairro, std::string cidade, std::string estado, std::string cep);
        Endereco();

        std::string toString();

    protected:

    private:
        std::string rua, bairro, cidade, estado, cep;
        int numero;
};

#endif // ENDERECO_H
