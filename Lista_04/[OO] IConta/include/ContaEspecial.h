#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H

#include "Conta.h"

class ContaEspecial : public Conta
{
    public:
        ContaEspecial();
        ContaEspecial(std::string nomeCliente, int numeroConta, float salarioMensal);
        void definirLimite();

        virtual void sacar(double valor) override;
        virtual void depositar(double valor) override;
        virtual float saldoTotalDisponivel() override;

    protected:

    private:
};

#endif // CONTAESPECIAL_H
