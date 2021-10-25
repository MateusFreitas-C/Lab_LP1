#ifndef DESPESA_H
#define DESPESA_H
#include <string>

class Despesa
{
    public:
        Despesa();

        std::string getNome();
        std:: string getTipo();
        float getValor();

        void setNome(std::string nome);
        void setTipo(std::string tipo);
        void setValor(float valor);

    private:
        std::string nome, tipo;
        float valor;
};

#endif // DESPESA_H
