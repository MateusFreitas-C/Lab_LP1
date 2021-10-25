#ifndef IMOVEL_H
#define IMOVEL_H

#include <string>
using namespace std;

class Imovel
{
    public:
        Imovel();
        virtual ~Imovel();

        virtual void lerAtributos() = 0;
        virtual void exibeAtributos() = 0;

    protected:
        string nome, disponibilidade;
        float valor;
        int tipo;

};

#endif // IMOVEL_H
