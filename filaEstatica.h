#ifndef FILAESTATICA_H_INCLUDED
#define FILAESTATICA_H_INCLUDED
#include <stdio.h>
#define MAX 6

typedef int bool;
typedef int TIPOCHAVE;

typedef struct{
    TIPOCHAVE chave;
}REGISTRO;

typedef struct{
    REGISTRO A[MAX];
    int inicio;
    int numElem;
}FILA;

void inicializarFila(FILA*);
int tamanhoFila(FILA*);
void exibirFila(FILA*);
void inserirElementoFila(FILA*, REGISTRO);
void excluirElemento(FILA*);
#endif // FILAESTATICA_H_INCLUDED
