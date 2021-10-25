#include "Circulo.h"
#include <iostream>

Circulo::Circulo(int tipo)
    : FiguraGeometrica(tipo)
{
    nome = "C�rculo";
}

float Circulo::calcularArea(){
    return 3.14 * raio * raio;
}

void Circulo::lerAtributosArea(){
    std::cin >> raio;
}
