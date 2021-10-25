#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H

#include "Trabalhador.h"

class TrabalhadorPorHora : public Trabalhador
{
    public:
        TrabalhadorPorHora(float valor);

        float calcularPagamentoSemanal(int horas);

    protected:

    private:
        float valorDaHora;
};

#endif // TRABALHADORPORHORA_H
