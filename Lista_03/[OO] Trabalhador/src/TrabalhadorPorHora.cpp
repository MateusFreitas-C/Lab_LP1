#include "TrabalhadorPorHora.h"

TrabalhadorPorHora::TrabalhadorPorHora(float valor)
{
    valorDaHora = valor;
}

float TrabalhadorPorHora::calcularPagamentoSemanal(int horas){
    float semanal;

    if(horas <= 40){
        semanal = valorDaHora * horas;

    }else{
        semanal = valorDaHora * 40;
        semanal += valorDaHora * 1.5 * (horas - 40);
    }

    salario = semanal * 4;

    return semanal;
}
