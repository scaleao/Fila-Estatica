#include "filaEstatica.h"

void inicializarFila(FILA* f){
    f->inicio = -1;
    f->numElem = 0;
}

int tamanhoFila(FILA* f){
    return(f->numElem);
}

void exibirFila(FILA *f){
    printf("\nFila: \n");
    int inicio = f->inicio;
    int cont;
    for(cont = 0; cont < f->numElem; cont++){
        printf("%d\n", f->A[inicio].chave);
        inicio = (inicio + 1) % MAX;
    }
    printf("\n\n");
}

void inserirElementoFila(FILA* f, REGISTRO novoReg){
    int pos;
    if(f->numElem >= MAX)
        printf("\nFila cheia, impossivel inserir.\n");

    if(f->inicio == -1){
        pos = 0;
        f->inicio = 0;
    }
    else
        pos = (f->inicio + f->numElem) % MAX;

    f->A[pos] = novoReg;
    f->numElem ++;
    printf("\nElemento inserido\n");
}

void excluirElemento(FILA* f){
    if (f->numElem == 0){
        printf("\nFila vazia\n");
        return;
    }

    f->inicio = (f->inicio + 1) % MAX;
    f->numElem --;

}
