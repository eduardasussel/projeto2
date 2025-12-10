#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "circulo.h"

#define PI 3.14159

typedef struct CirculoInterna {
    int i;
    double x;
    double y;
    double raio;
    char corb[20];
    char corp[20];
} CirculoData;

Circulo criaCirculo(int i, double x, double y, double raio, const char *corb, const char *corp) {
    CirculoData *c = malloc(sizeof(CirculoData));
    if (!c) {
        printf("Erro ao alocar círculo!");
        exit(1);
    }

    c->i = i;
    c->x = x;
    c->y = y;
    c->raio = raio;

    strncpy(c->corb, corb, sizeof(c->corb) - 1);
    c->corb[sizeof(c->corb) - 1] = '\0';

    strncpy(c->corp, corp, sizeof(c->corp) - 1);
    c->corp[sizeof(c->corp) - 1] = '\0';

    return (Circulo)c;
}

void movecirculo(Circulo c, double dx, double dy) {
    CirculoData *cir = (CirculoData *) c;
    cir->x += dx;
    cir->y += dy;
}

double areaCirculo(Circulo c){
    CirculoData *cir = (CirculoData *) c;
    return PI * cir->raio * cir->raio; 
}

int iCirculo(Circulo c){
    CirculoData *cir = (CirculoData *) c;
    return cir->i;
}

double xCirculo(Circulo c){
    CirculoData *cir = (CirculoData *) c;
    return cir->x;
}

double yCirculo(Circulo c){
    CirculoData *cir = (CirculoData *) c;
    return cir->y;
}

double raioCirculo(Circulo c){
    CirculoData *cir = (CirculoData *) c;
    return cir->raio;
}

const char* corCirculoP(Circulo c) {
    CirculoData *cir = (CirculoData *) c;
    return cir->corp;
}

const char* corCirculoB(Circulo c) {
    CirculoData *cir = (CirculoData *) c;
    return cir->corb;
}

void novaCorCirculoP(Circulo c, const char *novaCor){
    CirculoData *cir = (CirculoData *) c;
    strcpy(cir->corb, novaCor);
}

void novaCorCirculoB(Circulo c, const char *novaCor){
    CirculoData *cir = (CirculoData *) c;
    strcpy(cir->corp, novaCor);
}

Circulo clonaCirculo(Circulo c) {
    CirculoData *cir = (CirculoData*) c;
    return criaCirculo(cir->i, cir->x, cir->y, cir->raio, cir->corb, cir->corp);
}

void novoXCirculo(Circulo c, double x){
    CirculoData *cir = (CirculoData *) c;
    cir->x = x; 
}

void novoYCirculo(Circulo c, double y){
    CirculoData *cir = (CirculoData *) c;
    cir->y = y; 
}
