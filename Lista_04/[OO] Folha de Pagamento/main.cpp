#include <iostream>
#include "SistemaGerenciaFolha.h"
#include "Funcionario.h"
#include "Horista.h"
#include "Assalariado.h"
#include "Comissionado.h"
#include "FuncionarioNaoExisteExeception.h"
#include "OrcamentoEstouradoException.h"

using namespace std;

int main()
{
    double orcamento, horas, varGenerica, comissao;
    string busca, nome;
    int matricula;
    Funcionario *func;

    cin >> orcamento;

    SistemaGerenciaFolha sgf = SistemaGerenciaFolha(orcamento);

    for(int i = 0; i < 3; i++){
        cin.ignore();
        getline(cin, nome);
        cin >> matricula;
        cin >> varGenerica;

        switch(i){
            case 0:
               func = new Assalariado(varGenerica);
               break;

            case 1:
                cin >> horas;
                func = new Horista(varGenerica, horas);
                break;

            case 2:
                cin >> comissao;
                func = new Comissionado(varGenerica, comissao);
        }

        func->setMatricula(matricula);
        func->setNome(nome);
        sgf.setFuncionairos(func);
    }

    cin.ignore();
    for(int i = 0; i < 3; i++){
        getline(cin, busca);

        try{
            cout << sgf.consultaSalarioFuncionario(busca) << endl;

        }catch(FuncionarioNaoExisteExeception f){

        }
    }

    try{
        cout << sgf.calculaTotalFolha() << endl;

    }catch(OrcamentoEstouradoException o){

    }

    return 0;
}
