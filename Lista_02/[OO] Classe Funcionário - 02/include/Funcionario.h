#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

class Funcionario
{
    public:
        Funcionario();
        Funcionario(std::string n, std::string s, float sm);

        float getSalarioAnual();
        void setNome(std::string n);
        void setSobrenome(std::string sn);
        void setSalario(float salario);
        std::string getNome();
        std::string getSobrenome();
        float getSalario();
        void aumentaSalario(float percent);

    private:
        std::string nome, sobrenome;
        float salario_mensal;

};

#endif // FUNCIONARIO_H
