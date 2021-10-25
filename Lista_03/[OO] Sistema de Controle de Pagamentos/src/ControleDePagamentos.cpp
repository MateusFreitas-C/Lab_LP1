#include "ControleDePagamentos.h"

ControleDePagamentos::ControleDePagamentos()
{
    //ctor
}

Pagamento ControleDePagamentos::getPagamento(int pos){

    if (pos >= 0 && pos < 15){
        return pagamento[pos];
    }
}

int ControleDePagamentos::getIndexFuncionario(std::string nome){

    for (int i = 0; i < 15; i++){
        if (pagamento[i].getNomeDoFuncionario().find(nome) != std::string::npos){
            return i;
        }
    }

    return -1;
}


void ControleDePagamentos::setPagamento(Pagamento p, int indice){

    if (indice >= 0 && indice < 15){
        pagamento[indice] = p;
    }
}


float ControleDePagamentos::calculaTotalDePagamentos(){
    float total = 0;

    for (int i = 0; i < 15; i++){
        total += pagamento[i].getValorPagamento();
    }

    return total;
}
