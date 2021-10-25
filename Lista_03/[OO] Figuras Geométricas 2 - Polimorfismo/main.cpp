#include <iostream>
#include "Quadrado.h"
#include "Triangulo.h"
#include "Retangulo.h"
#include "Circulo.h"
#include "FiguraGeometrica.h"

using namespace std;

int main()
{
    int tipo = 99;
    FiguraGeometrica *fig;

    while(1){
        cin >> tipo;

        switch(tipo){

        case 1:
            fig = new Quadrado();
            break;

        case 2:
            fig = new Retangulo();
            break;
        case 3:
            fig = new Triangulo();
            break;
        case 4:
            fig = new Circulo();
            break;
        case 0:
            return 0;
        }

        fig->lerAtributosArea();
        cout << fig->getNome() << " polimórfico de área " << fig->calcularArea() << endl;

    }

    return 0;
}
