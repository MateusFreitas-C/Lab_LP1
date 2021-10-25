#ifndef PESSOA_H
#define PESSOA_H
#include <string>

using namespace std;

class Pessoa
{
    public:
        Pessoa();
        Pessoa(string nome);
        Pessoa(string nome, int idade, string telefone);

       int getIdade();
       void setIdade(int idade);

       string getNome();
       void setNome(string nome);

       string getFone();
       void setFone(string telefone);


    private:
        string nome;
        int idade;
        string telefone;
};

#endif // PESSOA_H
