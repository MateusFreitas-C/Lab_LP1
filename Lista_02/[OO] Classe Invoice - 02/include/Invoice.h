#ifndef INVOICE_H
#define INVOICE_H
#include <string>

using namespace std;

class Invoice
{
    public:
        Invoice();
        Invoice(int n, string str, int q, float p);

        float getInvoiceAmount();
        void printInvoice();

        void setNum(int n);
        void setDescr(string str);
        void setQtde(int q);
        void setPreco(float p);


        int getNum();
        string getDescr();
        int getQtde();
        float getPreco();

    private:
        int num, qtde;
        string descr;
        float preco;
        float fatura;


};

#endif // INVOICE_H
