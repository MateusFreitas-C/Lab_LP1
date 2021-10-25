#include "Imovel.h"

#include <iostream>

using namespace std;

Imovel::Imovel()
{
    //ctor
}

Imovel::~Imovel()
{
    //dtor
}

void Imovel::exibeAtributos(){
    cout << nome << " para " << disponibilidade << ". ";
}

void Imovel::lerAtributos(){
    cin >> valor;
    cin.ignore();
    getline(cin, disponibilidade);
}
