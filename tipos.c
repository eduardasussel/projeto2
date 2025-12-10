#include <stdio.h>
#include <stdlib.h>
#include "tipos.h"
#include "circulo.h"
#include "retangulo.h"
#include "texto.h"
#include "linha.h"

typedef enum {
    CIRCULO,
    RETANGULO,
    TEXTO,
    LINHA
} TipoForma;

typedef struct {
    TipoForma tipo; 

    union {         
        Circulo circulo; 
        Retangulo retangulo;
        Texto texto;
        Linha linha;
        void *generico;
    } forma;
} FormaGeo;

TipoForma getFormaTipo(Forma f) {
    FormaGeo *fg = (FormaGeo *)f;
    return fg->tipo;
}


Forma criaFormaCirculo(Circulo c) {
    FormaGeo *novaForma = malloc(sizeof(FormaGeo));
    if (!novaForma) {
        perror("Erro ao alocar FormaGeo");
        exit(EXIT_FAILURE);
    }
    
    novaForma->tipo = TIPO_CIRCULO;
    
    novaForma->forma.circulo = c;
    
    return (Forma)novaForma;
}

Forma criaFormaRetangulo(Retangulo r) {
    FormaGeo *novaForma = malloc(sizeof(FormaGeo));
    if (!novaForma) {
        perror("Erro ao alocar FormaGeo");
        exit(EXIT_FAILURE);
    }
    
    novaForma->tipo = TIPO_RETANGULO;
    
    novaForma->forma.retangulo = r;
    
    return (Forma)novaForma;
}

Forma criaFormaTexto(Texto t) {
    FormaGeo *novaForma = malloc(sizeof(FormaGeo));
    if (!novaForma) {
        perror("Erro ao alocar FormaGeo");
        exit(EXIT_FAILURE);
    }
    
    novaForma->tipo = TIPO_TEXTO;
    
    novaForma->forma.texto = t;
    
    return (Forma)novaForma;
}

Forma criaFormaLinha(Linha l) {
    FormaGeo *novaForma = malloc(sizeof(FormaGeo));
    if (!novaForma) {
        perror("Erro ao alocar FormaGeo");
        exit(EXIT_FAILURE);
    }
    
    novaForma->tipo = TIPO_LINHA;
    
    novaForma->forma.linha = l;
    
    return (Forma)novaForma;
}