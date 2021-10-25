#ifndef PEDIDO_H
#define PEDIDO_H

#include <string>

class Pedido
{
    public:
        Pedido();
        Pedido(int n, std::string d, int q, float p);

        float getTotal();
        int getNumero();
        std::string getDescr();
        int getQuant();
        float getPreco();

        void incQuant(int q);

    protected:

    private:
        int numero;
        std::string descricao;
        int quant;
        float preco;
};

#endif // PEDIDO_H
