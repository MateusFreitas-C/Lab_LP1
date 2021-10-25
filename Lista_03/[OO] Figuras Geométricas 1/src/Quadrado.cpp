#include "Quadrado.h"
#include <iostream>

Quadrado::Quadrado(int tipo)
    : FiguraGeometrica(tipo)
{
    nome = "Quadrado";
}

float Quadrado::calcularArea(){
    return lado * lado;
}

void Quadrado::lerAtributosArea(){
    std::cin >> lado;
}
