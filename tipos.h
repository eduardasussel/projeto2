#ifndef TIPOS_H
#define TIPOS_H


#include "circulo.h"
#include "retangulo.h"
#include "texto.h"
#include "linha.h"

struct FormaGeoInterna;
typedef struct FormaGeoInterna *Forma;

typedef enum {
    TIPO_CIRCULO,
    TIPO_RETANGULO, 
    TIPO_LINHA,
    TIPO_TEXTO
} TipoForma;

TipoForma getFormaTipo(Forma f);

Forma criaFormaCirculo(Circulo c);

Forma criaFormaRetangulo(Retangulo r);

Forma criaFormaTexto(Texto t);

Forma criaFormaLinha(Linha l);

#endif