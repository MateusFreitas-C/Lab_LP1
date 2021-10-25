#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

class Funcionario
{
    public:
        Funcionario();

        std::string getMatricula();
        std::string getNome();
        float getSalario();
        void setMatricula(std::string m);
        void setNome(std::string n);
        void setSalario(float s);

    protected:
        std::string matricula, nome;
        float salario;

};

#endif // FUNCIONARIO_H
