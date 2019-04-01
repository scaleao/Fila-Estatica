#include <stdio.h>
#include <stdlib.h>
#include "filaEstatica.h"

int main()
{
    FILA fila;
    REGISTRO novoReg;

    inicializarFila(&fila);

    novoReg.chave = 1;
    inserirElementoFila(&fila, novoReg);

    novoReg.chave = 10;
    inserirElementoFila(&fila, novoReg);

    novoReg.chave = 100;
    inserirElementoFila(&fila, novoReg);

    exibirFila(&fila);
    return 0;
}
