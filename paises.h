#ifndef _PAISES
#define _PAISES

#define max_Country 30

#include "pais.h"
typedef struct{
    tPais pais[max_Country];
    int quantPaises;
}tPaises;

void lePaises(FILE *file, tPaises *paises);
void ordena(tPaises *paises, int cmp(tPais, tPais));
void ordenaPrincipal(tPaises *paises);
void criaArquivo(FILE *file, tPaises *paises);

#endif