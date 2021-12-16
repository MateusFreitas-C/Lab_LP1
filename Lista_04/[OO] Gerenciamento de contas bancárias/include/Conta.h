#ifndef CONTA_H
#define CONTA_H

#include <string>

class Conta{
    protected:
        std::string nomeCliente;
        int numeroDaConta;
        double saldoAtual;

    public:
        Conta();
        Conta(std::string nomeCliente, int numeroDaConta, double saldoAtual);

        std::string getNomeCliente();
        int getNumeroDaConta();
        double getSaldoAtual();

        void setNomeCliente(std::string nomeCliente);
        void setNumeroDaConta(int numeroDaConta);
        void setSaldoAtual(double saldoAtual);

        void sacar(double valorSacado);
        void depositar(double valorDepositado);
        virtual double saldoTotalDisponivel() ;
};

#endif // CONTA_H
