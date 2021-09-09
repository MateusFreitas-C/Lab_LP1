#ifndef INVOICE_H
#define INVOICE_H
#include <string>

using namespace std;

class Invoice
{
    public:
        Invoice();
        int num, qtde;
        string descr;
        float preco;
        float fatura;

        void getInvoiceAmount();
};

#endif // INVOICE_H
