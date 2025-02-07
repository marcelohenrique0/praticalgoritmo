#include <stdio.h>
#include <stdlib.h>

typedef struct _fila Fila;

Fila* CriaFila(int MAX_SIZE);

void DestruirFila(Fila **Q);

int FilaVazia(Fila *Q);

int FilaCheia(Fila *Q);

int InsereFila(Fila *Q, int elem);

int RemoveFila(Fila *Q);

int ConsultaFila(Fila *Q, int *elem);
