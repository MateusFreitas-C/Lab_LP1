#include <stdio.h>
#include <string.h>

typedef struct Movel{
    char descricao[50];
    float peso;
    char tipo;

    }tMovel;

void RemoveBarraN(char *str){
    if (str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
}

int main(){
    int n, i, contador_peso = 0, contador_real = 0, maior_peso = 0, indice_peso;

    scanf("%d%*c", &n);

    tMovel moveis[n];

    for(i = 0; i < n; i++){
        fgets(moveis[i].descricao, 50, stdin);
        RemoveBarraN(moveis[i].descricao);
        scanf("%f%*c", &moveis[i].peso);
        scanf("%c%*c", &moveis[i].tipo);
    }

    for(i = 0; i < n; i++){
        if(moveis[i].tipo == 's' && moveis[i].peso > 10){
            contador_peso++;
        }

        if(strstr(moveis[i].descricao, "Real")){
            contador_real++;
        }

        if(moveis[i].peso > maior_peso){
            maior_peso = moveis[i].peso;
            indice_peso = i;
        }
    }

    printf("Tipo 's' acima de 10Kg: %d\n", contador_peso);
    printf("Termina em  \"Real\": %d\n", contador_real);
    printf("Mais pesado: \"%s\"\n", moveis[indice_peso].descricao);

    return 0;
}