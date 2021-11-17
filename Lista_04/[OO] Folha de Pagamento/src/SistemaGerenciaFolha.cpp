#include "SistemaGerenciaFolha.h"
#include <string>
#include "FuncionarioNaoExisteExeception.h"
#include "OrcamentoEstouradoException.h"

SistemaGerenciaFolha::SistemaGerenciaFolha(double orcamento)
{
    orcamentoMax = orcamento;
}

void SistemaGerenciaFolha::setFuncionairos(Funcionario* func){
    funcionarios.push_back(func);
}

double SistemaGerenciaFolha::calculaTotalFolha(){
    double total = 0;

    for(int i = 0; i < funcionarios.size(); i++){
        total += funcionarios[i]->calcularSalario();
    }

    if(total > orcamentoMax){
        throw OrcamentoEstouradoException(total);
    }

    return total;
}

double SistemaGerenciaFolha::consultaSalarioFuncionario(std::string n){
    for(int i = 0; i < funcionarios.size(); i++){
        if(funcionarios[i]->getNome().find(n) != std::string::npos){

            return funcionarios[i]->calcularSalario();
        }
    }
    throw FuncionarioNaoExisteExeception(n);

    return 0;
}
