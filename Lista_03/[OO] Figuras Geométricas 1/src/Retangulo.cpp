#include "Retangulo.h"
#include <iostream>

Retangulo::Retangulo(int tipo)
    : FiguraGeometrica(tipo)
{
    nome = "Ret�ngulo";
}

float Retangulo::calcularArea(){
    return l2 * l1;
}

void Retangulo::lerAtributosArea(){
    std::cin >> l1;
    std::cin >> l2;
}
