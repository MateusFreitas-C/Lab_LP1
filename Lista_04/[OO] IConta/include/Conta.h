#ifndef CONTA_H
#define CONTA_H

#include "IConta.h"
#include <string>

class Conta : public IConta
{
    public:
        Conta();
        Conta(std::string nomeCliente, int numeroConta, float salarioMensal);
        void definirLimite();

        std::string getNome();
        int getConta();
        float getSalario();
        float getSaldo();
        float getLimite();

        void setNome(std::string nome);
        void setConta(int numero);
        void setSalario(float salario);
        void setSaldo(float saldo);
        void setLimite(float limite);

        virtual void sacar(double valor) override;
        virtual void depositar(double valor) override;
        virtual float saldoTotalDisponivel() override;

    protected:
        std::string nomeCliente;
        int numeroConta;
        float salarioMensal;
        float saldo;
        float limite;

    private:
};

#endif // CONTA_H
