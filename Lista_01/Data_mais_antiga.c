#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Data{
    int dia;
    int mes;
    int ano;
    }tData;

int Mais_Velho(tData d1, tData d2){
    if(d1.ano > d2.ano){
        return 1;
    
    }else if(d1.ano < d2.ano){
        return -1;
    
    }else{
        if(d1.mes > d2.mes){
            return 1;
        
        }else if(d1.mes < d2.mes){
            return -1;

        }else{
            if(d1.dia > d2.dia){
                return 1;
            
            }else if(d1.dia < d2.dia){
                return -1;

            }else{
                return 0;
            }
        }
    }


}

int main(){
    tData data_1, data_2;
    int resultado;

    scanf("%d %d %d", &data_1.dia, &data_1.mes, &data_1.ano);
    scanf("%d %d %d", &data_2.dia, &data_2.mes, &data_2.ano);

   resultado = Mais_Velho(data_1, data_2);

   switch (resultado)
   {
   case 1:
        puts("Pessoa 1 é mais velha");
       break;

    case -1:
        puts("Pessoa 2 é mais velha");
        break;

   default:
        puts("Pessoas são da mesma idade");
       break;
   }

    return 0;
}