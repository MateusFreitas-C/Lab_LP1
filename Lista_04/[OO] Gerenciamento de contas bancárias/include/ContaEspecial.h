#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H

#include "ContaCorrente.h"

class ContaEspecial: public ContaCorrente{
    public:
        ContaEspecial();
        ContaEspecial(std::string nomeCliente, int numeroDaConta, double salario);


        virtual void definirLimite() override;

};
#endif // CONTAESPECIAL_H
