#include <stdio.h>
#include <string.h>

int main(){
    typedef struct Carro{
        char modelo[20];
        char marca[20];
        int ano;
        float preco;
    }tCarro;

    tCarro carro[2];
    int i;
    
    for(i = 0; i < 2; i++){
        scanf("%s%*c", carro[i].modelo);
        scanf("%s%*c", carro[i].marca);
        scanf("%d", &carro[i].ano);
        scanf("%f", &carro[i].preco);
    }
    
  
    if(carro[0].ano > carro[1].ano){
        printf("%s %s\n", carro[1].marca, carro[1].modelo);
    
    }if(carro[0].ano < carro[1].ano){
        printf("%s %s\n", carro[0].marca, carro[0].modelo);
        
    }if(carro[0].ano == carro[1].ano){
        if(carro[0].preco > carro[1].preco){
            printf("%s %s\n", carro[1].marca, carro[1].modelo);
        }else{
            printf("%s %s\n", carro[0].marca, carro[0].modelo);
        }
    }
    
    return 0;
}
