#include "ControleDeGastos.h"

ControleDeGastos::ControleDeGastos()
{
    //ctor
}

void ControleDeGastos::setDespesa(Despesa d, int pos){
    despesas[pos] = d;
}

Despesa ControleDeGastos::getDespesa(int pos){
    return despesas[pos];
}

float ControleDeGastos::calculaTotalDeDespesas(){
    float soma = 0;

    for(int i = 0; i < 100; i++){

        soma += despesas[i].getValor();
    }

    return soma;
}

float ControleDeGastos::calculaTotalDeDespesas(string tipo){
    float soma = 0;

    for(int i = 0; i < 100; i++){

        if(despesas[i].getTipo() == tipo){
            soma += despesas[i].getValor();
        }
    }
    return soma;
}

bool ControleDeGastos::existeDespesaDoTipo(string tipo){
    bool flag;

    for(int i = 0; i < 100; i++){

        if(despesas[i].getTipo() == tipo){
            flag = true;
            return flag;

        }else{
            flag = false;
            return flag;
        }
    }
}
