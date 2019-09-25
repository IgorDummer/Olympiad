#include <stdio.h>
#include "pais.h"
#include "paises.h"

int main(){
    FILE *file;
    tPaises paises;

    lePaises(file, &paises);
    ordenaPrincipal(&paises);
    criaArquivo(file, &paises);
    return 0;
}
