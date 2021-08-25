#include <stdio.h>
#include <stdlib.h>

void ExibeMenu(){
    
    printf("1 - Item 1\n");
    printf("2 - Item 2\n");
    printf("3 - Item 3\n");
    printf("4 - Sair\n");

}

int main(){
    int opcao;
    
    while(1){
        ExibeMenu();
        scanf("%d", &opcao);

        switch (opcao){
            case 1:
                puts("Item 1");
                break;
        
            case 2:
                puts("Item 2");
                break;
            
            case 3:
                puts("Item 3");
                break;

            case 4:
                puts("Sair");
                return 0;
            
            default:
                printf("Opcao %d Invalida\n", opcao); 
            }
    }
    return 0;
}