#ifndef PAGAMENTO_H
#define PAGAMENTO_H

#include <string>

class Pagamento
{
    public:
        Pagamento();

        std::string getNomeDoFuncionario();
        float getValorPagamento();
        void setNomeDoFuncionario(std::string nome);
        void setValorPagamento(float valor);

     private:
        std::string nomeDoFuncionario;
        float valorPagamento;
};

#endif // PAGAMENTO_H
