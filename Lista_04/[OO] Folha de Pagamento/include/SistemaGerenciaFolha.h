#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H

#include <vector>
#include "Funcionario.h"

class SistemaGerenciaFolha
{
    public:
        SistemaGerenciaFolha();
        SistemaGerenciaFolha(double orcamento);

        void setFuncionairos(Funcionario* func);
        double calculaTotalFolha();
        double consultaSalarioFuncionario(std::string n);

    private:
        std::vector<Funcionario*> funcionarios;
        double orcamentoMax;
};

#endif // SISTEMAGERENCIAFOLHA_H
