#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#include "circulo.h"
#include "retangulo.h"
#include "texto.h"
#include "linha.h"
#include "tipos.h"

typedef enum {
    TIPO_CIRCULO,
    TIPO_RETANGULO,
    TIPO_TEXTO,
    TIPO_LINHA
} TipoForma;

typedef struct NoForma {
    Forma forma;              
    struct NoForma *proximo;  
} NoForma;

typedef struct {
    NoForma *cabeca; 
    int contador;  
} ListaDeFormas;