#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

class Funcionario
{
    public:
        Funcionario();

        virtual double calcularSalario() = 0;
        std::string getNome();
        int getMatricula();
        void setNome(std::string n);
        void setMatricula(int m);

    protected:
        std::string nome;
        int matricula;

};

#endif // FUNCIONARIO_H
