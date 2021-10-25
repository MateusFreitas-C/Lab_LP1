#ifndef TRABALHADOR_H
#define TRABALHADOR_H

#include <string>

using namespace std;

class Trabalhador
{
    public:
        Trabalhador();

        string getNome();
        void setNome(string n);
        float getSalario();
        void setSalario(float s);

    protected:
        string nome;
        float salario;
};

#endif // TRABALHADOR_H
