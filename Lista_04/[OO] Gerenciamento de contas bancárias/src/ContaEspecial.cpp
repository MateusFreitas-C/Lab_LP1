#include "ContaEspecial.h"

ContaEspecial::ContaEspecial()
             : ContaCorrente()
{

}

ContaEspecial::ContaEspecial(std::string nomeCliente, int numeroDaConta, double salario)
             : ContaCorrente(nomeCliente, numeroDaConta, salario)
{
    definirLimite();
}

void ContaEspecial::definirLimite(){
    this->limiteDisponivel = salario * 4;
}
