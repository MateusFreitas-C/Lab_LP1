#ifndef POUPANCA_H
#define POUPANCA_H

#include "Conta.h"

class Poupanca: public Conta{
    protected:
        int variacao;
        double taxaDeRendimento;

    public:
        Poupanca();
        Poupanca(std::string nomeCliente, int numeroDaConta, double saldoAtual, int variacao, double rendimento);

        int getVariacao();
        double getTaxaDeRendimento();

        void setVariacao(int variacao);
        void setTaxaDeRendimento(double TaxaDeRendimento);

        double render();
        virtual double saldoTotalDisponivel() override;


};

#endif // POUPANCA_H
