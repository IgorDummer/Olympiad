#include <stdio.h>
#include "pais.h"

tPais lepais(FILE *file, tPais pais){
    fscanf(file, "%d %d %d %d", &pais.codigo , &pais.ouro, &pais.prata, &pais.bronze);
    return pais;
}

int cmpOuro(tPais pais1, tPais pais2){
    return pais1.ouro < pais2.ouro; 
}

int cmpPrata(tPais pais1, tPais pais2){
    return pais1.prata < pais2.prata;
}

int cmpBronze(tPais pais1, tPais pais2){
    return pais1.bronze < pais2.bronze;
}

void exibePais(FILE *file, tPais pais){
    fprintf(file, "%d %d %d %d\n", pais.codigo, pais.ouro, pais.prata, pais.bronze);
}