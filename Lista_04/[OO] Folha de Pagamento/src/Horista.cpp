#include "Horista.h"

Horista::Horista(double salario, double horas)
{
    salarioPorHora = salario;
    horasTrabalhadas = horas;
}

double Horista::calcularSalario(){
    double salarioSemanal = 0;

    if(horasTrabalhadas <= 40){
        salarioSemanal = horasTrabalhadas * salarioPorHora;

    }else{
        salarioSemanal = (40 * salarioPorHora) + ( (horasTrabalhadas - 40) * 1.5 *salarioPorHora);
    }

    return salarioSemanal * 4;
}
