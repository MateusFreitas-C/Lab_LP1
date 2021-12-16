#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

#include "Conta.h"

class ContaCorrente: public Conta{
    protected:
        double salario;
        double limiteDisponivel;

    public:
        ContaCorrente();
        ContaCorrente(std::string nomeCliente, int numeroDaConta, double salario);

        double getSalario();
        void setSalario(double salario);

        double getLimiteDisponivel();
        void setLimiteDisponivel(double limiteDisponivel);

        void depositar(double valorDepositado);

        virtual void definirLimite(); //salario * 2
        virtual double saldoTotalDisponivel() override;
};
#endif // CONTACORRENTE_H
