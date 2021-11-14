#include<stdio.h>
#include<stdlib.h>

typedef struct no_st{

	struct no_st *prox;
	int chave;

}no;

typedef struct lista_st{
	no *cabeca;
}lcc;

lcc *cria_lista(){

	lcc *lista;

	lista = (lcc*) malloc(sizeof(lcc));
	lista -> cabeca = (no*) malloc(sizeof(no));

	lista -> cabeca -> prox = NULL;

	return lista;
}

void insere_ordenado(lcc *lista, int chave){

	no* novo, *p, *q;

	novo = (no*) malloc(sizeof(no));
	novo -> chave = chave;
	p = lista -> cabeca;
	q = lista -> cabeca -> prox;

	for(;q != NULL && novo -> chave > q -> chave  ; p = q, q = q -> prox){
	
	}

	p -> prox = novo;
	novo -> prox = q;

}

void imprime(lcc *lista){
	no *p;

	p = lista -> cabeca -> prox;

	if(p == NULL){
		printf("lista vazia");
	}
	for(; p != NULL; p = p-> prox){
		printf("%d\n", p -> chave);
	}
	printf("\n");
}	

void remover(lcc *lista, int chave){
    
    	no *p, *aux;

    	p = lista -> cabeca;
    	aux = lista -> cabeca -> prox;
    	for(; aux != NULL && aux -> chave != chave; p = aux, aux = aux -> prox){
        printf("aux no campo chave = %d", aux -> chave);
    	}
}

int main(){
	lcc *lista;

	lista = cria_lista();
	insere_ordenado(lista, 15);
	insere_ordenado(lista, 10);
   	insere_ordenado(lista, 12);
    	insere_ordenado(lista, 11);
    	remover(lista, 11);
	imprime(lista);
    
}
