#include "FiguraGeometrica.h"

FiguraGeometrica::FiguraGeometrica(int tipo)
{
    this->tipo = tipo;
}

FiguraGeometrica::~FiguraGeometrica()
{
    //dtor
}

float FiguraGeometrica::calcularArea(){
    return 0;
}

void FiguraGeometrica::lerAtributosArea(){

}

std::string FiguraGeometrica::getNome(){
    return nome;
}
