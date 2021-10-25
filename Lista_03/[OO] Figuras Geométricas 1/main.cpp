#include <iostream>
#include "Quadrado.h"
#include "Triangulo.h"
#include "Retangulo.h"
#include "Circulo.h"

using namespace std;

int main()
{
    int tipo = 99;
    Quadrado q1 = Quadrado(1);
    Retangulo r1 = Retangulo(2);
    Triangulo t1 = Triangulo(3);
    Circulo c1 = Circulo(4);

    do{
        cin >> tipo;

        switch(tipo){

        case 1:
            q1.lerAtributosArea();
            cout << q1.getNome() << " de �rea " << q1.calcularArea()<< endl;
            break;

            case 2:
            r1.lerAtributosArea();
            cout << r1.getNome() << " de �rea " << r1.calcularArea()<< endl;
            break;
            case 3:
            t1.lerAtributosArea();
            cout << t1.getNome() << " de �rea " << t1.calcularArea() << endl;
            break;
            case 4:
            c1.lerAtributosArea();
            cout << c1.getNome() << " de �rea " << c1.calcularArea() << endl;
            break;
        }
    }while(tipo !=0);

    return 0;
}
