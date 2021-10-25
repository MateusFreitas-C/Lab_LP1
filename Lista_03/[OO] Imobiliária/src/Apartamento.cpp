#include "Apartamento.h"
#include <iostream>

using namespace std;

Apartamento::Apartamento() : Imovel()
{
    nome = "Apartamento";
    tipo = 2;
}

void Apartamento::lerAtributos(){
    Imovel::lerAtributos();
    cin >> area;
    cin >> nQuartos;
    cin >> andar;
    cin >> vCond;
    cin >> nGaragem;
}
void Apartamento::exibeAtributos(){
    Imovel::exibeAtributos();
    cout << area << "m2 de área, " << nQuartos << " quartos, " << andar << " andar(es), " << vCond << " de condomínio, " << nGaragem << " vaga(s) de garagem. R$ " << valor <<"." << endl;
}
