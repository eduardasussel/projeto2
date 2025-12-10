#include <stdio.h>
#include <stdlib.h>
#include "arquivo.h"
#include "circulo.h"



int main(){
    
PILHA *chao = criaPilha();
    lerArquivoGeo("entrada/entrada.geo", chao);
    lerArquivoQry("entrada/comandos.qry", chao);
} 

