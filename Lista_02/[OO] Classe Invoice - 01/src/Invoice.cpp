#include "Invoice.h"

Invoice::Invoice()
{
   fatura = 0;
}

void Invoice:: getInvoiceAmount(){
    fatura += preco* qtde;
}
