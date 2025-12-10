#include "lista.h"
#include <stdlib.h>
#include <stdio.h> 

typedef struct NoFormaInterna {
    Forma forma;
    struct NoFormaInterna *proximo;
} NoForma;

typedef struct ListaDeFormasInterna {
    NoForma *cabeca;
    int contador;
} ListaDeFormasControl;


ListaDeFormas criaListaFormas() {
    ListaDeFormasControl *l = malloc(sizeof(ListaDeFormasControl));
    if (l == NULL) {
        perror("Erro ao alocar ListaDeFormasControl");
        exit(EXIT_FAILURE);
    }
    l->cabeca = NULL;
    l->contador = 0;
    return (ListaDeFormas)l;
}

void insereForma(ListaDeFormas lista, Forma f) {
    ListaDeFormasControl *l = (ListaDeFormasControl *)lista; 
    
    NoForma *novoNo = (NoForma *)malloc(sizeof(NoForma));
    if (novoNo == NULL) {
        perror("Erro ao alocar NoForma");
        exit(EXIT_FAILURE);
    }
    
    novoNo->forma = f; 
    
    novoNo->proximo = l->cabeca;
    l->cabeca = novoNo;
    l->contador++;
}