#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H
#include "Despesa.h"
#include <string>

using namespace std;

class ControleDeGastos
{
    public:
        ControleDeGastos();

        void setDespesa(Despesa d, int pos);
        Despesa getDespesa(int pos);
        float calculaTotalDeDespesas();
        float calculaTotalDeDespesas(string tipo);
        bool existeDespesaDoTipo(string tipo);

    private:
        Despesa despesas[100];
};

#endif // CONTROLEDEGASTOS_H
