#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H

#include "Pagamento.h"
#include <string>

class ControleDePagamentos
{
    public:
        ControleDePagamentos();

        Pagamento getPagamento(Pagamento p, int index);
        int getIndexFuncionario(std::string nome);
        void setPagamento(Pagamento p, int index);
        float calculaTotalDePagamentos();
        Pagamento getPagamento(int pos);

    private:
        Pagamento pagamento[15];
};

#endif // CONTROLEDEPAGAMENTOS_H
