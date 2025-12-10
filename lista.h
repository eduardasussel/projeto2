#ifndef LISTA_H
#define LISTA_H

#include "tipos.h"
#include <stdbool.h>

struct NoFormaInterna;
struct ListaDeFormasInterna;

typedef struct ListaDeFormasInterna *ListaDeFormas;

ListaDeFormas criaListaDeFormas();
void insereForma(ListaDeFormas lista, Forma f); 

#endif