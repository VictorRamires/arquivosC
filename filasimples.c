#include<stdio.h>
#include<stdlib.h>
#define MAX 10
#include<stdlib.h>

typedef struct fila_seq {
	int *vet;
	int max;
	int inicio;
	int fim;
}filaseq;


filaseq *cria_nova(int max){
	filaseq *f;

	f = (filaseq *) malloc(sizeof(filaseq));

	f->vet = (int *) malloc(sizeof(int));

	f-> inicio = f-> fim = 0;
	f-> max = max;
	return f;

}

void enfileira(filaseq *f, int novo){
	int max = 10;
	if(f-> fim != max){
		f-> vet = novo;
		f -> fim++;
	}

	else printf("fila cheia");

}

int desenfileira(filaseq *f){
	int x;

	if(f -> inicio != f-> fim){
		x = f-> inicio;
		f -> inicio++;
	}	
	else{
		printf("fila vazia\n")
		x = INT_MAX;
	}
	return x;
}

void imprime(filaseq *f){

	if(f-> inicio == f-> fim){
		printf("fila vazia\n");
	}
	else{
		for(int i = f -> inicio; i < f-> fim; i++){
			printf("%d ", f->vet[i]);
		}
	}
}