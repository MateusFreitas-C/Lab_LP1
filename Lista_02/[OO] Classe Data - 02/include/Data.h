#ifndef DATA_H
#define DATA_H


class Data
{
    public:
        Data();
        int getDia();
        int getMes();
        int getAno();
        void setDia(int d);
        void setMes(int m);
        void setAno(int a);
        void printData();

    private:
        int dia, mes, ano;
};

#endif // DATA_H
