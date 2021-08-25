#include <stdio.h>
#include <string.h>

#define MAX_NOME 100
#define MAX_CANDIDATOS 10

typedef struct {
    char nome[MAX_NOME];
    int cod;
    int qtd;
    float porcetagem;
}tCandidatos;

tCandidatos candidato[MAX_CANDIDATOS];

void RemoveBarraN(char *str){
    if (str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
}

int main(){
    int n, i, j = 0;
    int votacao, nulos = 0;
    int nVotos = 0;
    int nTotalDeVotos;
    int contador = 0;
    int maior = 0;
    float nPorcetagemNulos;


    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d%*c", &candidato[i].cod);
        fgets(candidato[i].nome, MAX_NOME, stdin);
        RemoveBarraN(candidato[i].nome);
    }

    for (i = 0; i < n; i++){
        candidato[i].qtd = 0;
    }
    

    while (1){

        scanf("%d", &votacao);
        contador = 0;
        if(votacao <= 0){
            break;
        }else{
            for (i = 0; i < n; i++){
                if(votacao == candidato[i].cod){
                    candidato[i].qtd++;
                }else if(votacao != candidato[i].cod && votacao > 0){
                    contador++;
                }
            }
            if(contador == n) {
                nulos++;
            }   
        }
    }
    

    for (i = 0; i < n; i++){
        nVotos += candidato[i].qtd;
    }

    nTotalDeVotos = nVotos + nulos;

    for (i = 0; i < n; i++){
        candidato[i].porcetagem = (candidato[i].qtd * 100)* 1.0/nTotalDeVotos*1.0;
    }
    for (i = 0; i < n; i++){
        if(maior < candidato[i].qtd){
            maior = candidato[i].qtd;
        }
    }
    
    for (i = 0; i < n; i++){
        printf("%.2f - %d - %s ", candidato[i].porcetagem, candidato[i].cod, candidato[i].nome);
        if(candidato[i].qtd >= maior){
            printf("VENCEDOR\n");
        }else{
            puts(" ");
        }
    }
    
    nPorcetagemNulos = (nulos * 100)*1.0/nTotalDeVotos*1.0;

    printf("%.2f - Nulos\n", nPorcetagemNulos);  

    return 0;
}