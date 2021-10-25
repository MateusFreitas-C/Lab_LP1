#ifndef DATA_H
#define DATA_H

#include <iostream>

class Data
{
    public:
        Data();
        Data(int d, int m, int a);
        std::string getDia();
        std::string getMes();
        int getAno();
        void setDia(int d);
        void setMes(int m);
        void setAno(int a);
        void avancarDia();
        int getDaysMonth(int mes);

    private:
        int dia, mes, ano;
};

#endif // DATA_H
