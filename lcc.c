#include<stdio.h>
#include<stdlib.h>


//crio meu no, com o campo chave e o campo prox 
typedef struct no_st{
	int chave;
	struct no_st *prox;
}no;

//crio meu campo cabeça da lista, que contem um campo chave e um campo prox 
typedef struct lcc_st{
	no *cabeca;
}lcc;


//crio nova lista com cabeça, aloco dinamicamente o tamanho da lista e faço o primeiro campo apontar para null e retorno a lista vazia.
lcc* cria_nova_lcc(){
	
	lcc *lista;
	lista = (lcc*) malloc(sizeof(lcc));
	lista->cabeca->prox = NULL;

	return lista;
}

/*void insere(no *x, int key, lcc* lista){
	no *novo;

	novo = (no*) malloc(sizeof(no));
	novo->chave = key;
	novo->prox = x -> prox;
	x-> prox = novo; 

}*/


void insere_final(lcc *lista, int key){
	//crio duas variaveis do tipo no;

	no *novo, *p;

	novo = (no*) malloc(sizeof(no));
	novo -> chave = key;

	for(p = lista -> cabeca; p -> prox != NULL; p = p -> prox){

	}

	p -> prox = novo;
	novo -> prox = NULL;

}

no* busca(lcc *lista, int key){
	no *p;

	p = lista -> cabeca -> prox;

	for(; p != NULL && p -> chave != key; p = p -> prox){

	}

	return p;

}

void apaga(lcc *lista, int key){
	no *p, *q;

	p = lista -> cabeca;
	q = lista -> cabeca -> prox;

	while(q != NULL && q -> chave != key){
		p = q;
		q = q -> prox;
	}
	if(q != NULL){
		p -> prox = q -> prox;
		free(q);
	}
}

void imprime(lcc *lista){
	no *p;

	p = lista -> cabeca -> prox;

	if(p == NULL){
		printf("lista vazia");
	}
	for(; p != NULL; p = p-> prox){
		printf("%d", p -> chave);
	}
	printf("\n");

}	
int main(){
	lcc *lista;

	lista = cria_nova_lcc();
	insere_final(lista, 10);
	insere_final(lista, 20);
	insere_final(lista, 30);	
	insere_final(lista, 40);
	insere_final(lista, 50);

	imprime(lista);
	apaga(lista, 20);
	imprime(lista);
}	