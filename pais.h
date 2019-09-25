#ifndef _PAIS
#define _PAIS

typedef struct{
    int ouro, prata, bronze;
    int codigo;
}tPais;

tPais lepais(FILE *file, tPais pais);
int cmpOuro(tPais pais1, tPais pais2);
int cmpPrata(tPais pais1, tPais pais2);
int cmpBronze(tPais pais1, tPais pais2);
void exibePais(FILE *file, tPais pais);

#endif 