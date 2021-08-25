#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char cpf[21];
    char nome[21]; 
    char snome[21];
    char end[50];
    char tel[10]; 
    }tDados;

int n;
tDados pessoa[20];

void RemoveBarraN(char *str){
    if (str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
}

void SalvaDados(){
    int i;
    FILE *fp;

    fp = fopen("atividade.csv", "w");
    if (fp == NULL){
        return;
    }
    for(i = 0; i < n; i++){
        fgets(pessoa[i].cpf, 21, stdin);
        RemoveBarraN(pessoa[i].cpf);
        fprintf(fp, "%s,", pessoa[i].cpf);

        fgets(pessoa[i].nome, 21, stdin);
        RemoveBarraN(pessoa[i].nome);
        fprintf(fp, "%s,", pessoa[i].nome);

        fgets(pessoa[i].snome, 21, stdin);
        RemoveBarraN(pessoa[i].snome);
        fprintf(fp, "%s,", pessoa[i].snome);

        fgets(pessoa[i].end, 50, stdin);
        RemoveBarraN(pessoa[i].end);
        fprintf(fp, "%s,", pessoa[i].end);

        fgets(pessoa[i].tel, 21, stdin);
        RemoveBarraN(pessoa[i].tel);
        fprintf(fp, "%s\n", pessoa[i].tel);
    }

    if (fclose(fp) == 0){
    }
}

void CarregaDados(){
    FILE *fp;
    char str[101];
    
    printf("CPF,");
    printf("nome,");
    printf("snome,");
    printf("endereço,");
    printf("telefone\n");

    fp = fopen("atividade.csv", "r");
    if (fp == NULL){
        return;
    }

    while(1){
        int i = 1;

        fgets(str, 101, fp);
        
        if (feof(fp))
                break;
        
        printf("%s", str);
        if(i % 5 == 0){
            printf("\n");
        }

        i++;
    }

    if (fclose(fp) == 0){
    }
}

int main(){
    
    scanf("%d%*c", &n);
    
    SalvaDados();
    CarregaDados();

    return 0;
}