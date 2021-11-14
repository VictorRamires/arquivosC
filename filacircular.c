#include<stdio.h>
#include<stdlib.h>
#define MAX 10
#include<stdlib.h>

typedef struct fila_circ {
	int *vet;
	int max;
	int inicio;
	int fim;
}filaseq;


filacirc *cria_nova(int max){
	filacirc *f;

	f = (filaseq *) malloc(sizeof(filaseq));

	f->vet = (int *) malloc(max * sizeof(int));

	f-> inicio = INT_MIN;
	f-> fim = INT_MAX;
	f-> max = max;
	return f;

}

void enfileira(filacirc *f, int novo){

	if(f-> fim == INT_MAX){
		f-> inicio = f-> fim = 0;
		
		f->vet[f->fim] = novo;
		f -> fim = (f->fim + 1) % f -> max;

	}

	else printf("fila cheia");

}

int desenfileira(filacirc *f){
	int x;

	x = INT_MAX;
	if(f -> inicio != f-> fim){
		x = f -> vet[f-> inicio];
		f -> inicio = (f -> inicio + 1) % f-> max;
	}	
	if(f-> inicio == f-> fim){
		f-> inicio = INT_MIN;
		f-> fim = INT_MAX;
	}

	else{
		printf("fila vazia\n")
		x = INT_MAX;
	}
	return x;
}

void imprime(filacirc *f){

	int i;
	if(f-> inicio == INT_MIN){
		printf("fila vazia\n");
		return;
	}

	i = f -> inicio;
	do{

		printf("%d ", f->vet[i]);
		i = (i + 1) % f-> max;
	}while (i != f -> fim);
	printf("\n");
}