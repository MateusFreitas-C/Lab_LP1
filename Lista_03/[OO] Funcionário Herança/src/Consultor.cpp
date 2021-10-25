#include "Consultor.h"

Consultor::Consultor()
{
    //ctor
}

float Consultor::getSalario(){
    return salario * 1.1;
}

float Consultor::getSalario(float percentual){
    return salario + (salario * percentual);
}
