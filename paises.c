#include <stdio.h>
#include <stdlib.h>
#include "pais.h"
#include "paises.h"

#define max_Country 30

void lePaises(FILE *file, tPaises *paises){
    int i;
    file = fopen("arquivo.txt", "r");
    if(file == NULL){
        printf("Error\n");
        exit(1);
    }

    for(i=0; i < max_Country && !feof(file); i++){  //feof pra caso o arquivo acabe antes de atingir seu limite de leitura
        paises->pais[i]=lepais(file, paises->pais[i]);
    }
    paises->quantPaises = i-1;
    fclose(file);
}

void ordena(tPaises *paises, int cmp(tPais, tPais)){
    tPais aux;
    for(int i=0; i < paises->quantPaises; i++){
        for(int j=0; j < paises->quantPaises-i-1;j++){
            if(cmp(paises->pais[j], paises->pais[j+1])){
                aux = paises->pais[j];
                paises->pais[j] = paises->pais[j+1];
                paises->pais[j+1] = aux;
            }
        }
    }
}

void ordenaPrincipal(tPaises *paises){ //Em ordem de menor importancia.
    ordena(paises, cmpBronze);
    ordena(paises, cmpPrata);
    ordena(paises, cmpOuro);
}

void criaArquivo(FILE *file, tPaises *paises){
    file = fopen("olimpiada.txt", "w"); 
    if(file == NULL){                   //Encerra programa se der erro ao criar.
        printf("Error\n");
        exit(1);
    }

    for(int i=0; i < paises->quantPaises; i++){
        exibePais(file, paises->pais[i]);
    }
    fclose(file);
}