#include"ldecc.h"

ldecc *cria_nova(){
	ldecc *lista;

	lista = (ldecc*) malloc(sizeof(ldecc));
	lista -> cabeca = (no*) malloc(sizeof(no));

	lista -> cabeca -> prox = lista -> cabeca -> ant = NULL;

	return lista;
}

void insere_lista(ldecc lista, char palavra, int arq_num, int arq_atual){
	no* novo, *p, *q;

	novo = (no*) malloc(sizeof(no));
	strcpy(novo -> chave,palavra);
	novo -> vet = (int*) malloc(arq_num * sizeof(int));

	p = lista-> cabeca;
	q = lista-> cabeca -> prox;

	for(; q != NULL && strcmp(novo -> chave, q -> chave) > 0; p = q, q = q -> prox){
		
	}

	if(q != NULL && strcmp(novo -> chave, q -> chave) == 0){
		q -> vet[arq_atual]++; 
	}else{
		novo -> prox = q;
		if(q != NULL){
			q -> ant = novo;
		}
		
		novo -> ant = p;
		p -> prox = novo;
		novo -> vet[arq_atual]++;
	
	}

}

void imprime_lista(ldecc lista, int arq_num){
	no *p;

	p = lista -> cabeca -> prox;

	for( ; p != NULL; p = p-> prox){
		printf("%s", p -> chave);
		for(int i = 0; i < arq_num; i++){
			printf(" %d", p -> vet[i]);
		}	
		printf("\n");
	}

}

void conversor(char frase[MAX]){
	int i=0;

	while(frase[i] != '\0'){
//compara pelo numero de byts, a partir do primeiro caractere, compara os dois primeiros.
		if(memcmp(frase+i, "Á", 2)==0){
			memcpy(frase+i, "á", sizeof("á"));
		}
		else if(memcmp(frase+i, "É", 2)==0){
			memcpy(frase+i, "é", 2);
		}
		else if(memcmp(frase+i, "Í", 2)==0){
			memcpy(frase+i, "í", 2);
		}
		else if(memcmp(frase+i, "Ó", 2)==0){
			memcpy(frase+i, "ó", 2);
		}
		else if(memcmp(frase+i, "Ú", 2)==0){
			memcpy(frase+i, "ú", 2);
		}

		else if(memcmp(frase+i, "À", 2)==0){
			memcpy(frase+i, "à", 2);
		}

		else if(memcmp(frase+i, "Â", 2)==0){
			memcpy(frase+i, "â", 2);
		}
		else if(memcmp(frase+i, "Ê", 2)==0){
			memcpy(frase+i, "ê", 2);
		}
		else if(memcmp(frase+i, "Ô", 2)==0){
			memcpy(frase+i, "ô", 2);
		}


		else if(memcmp(frase+i, "Ã", 2)==0){
			memcpy(frase+i, "ã", 2);
		}
		else if(memcmp(frase+i, "Õ", 2)==0){
			memcpy(frase+i, "õ", 2);
		}

		else if(memcmp(frase+i, "Ç", 2)==0){
			memcpy(frase+i, "ç", 2);
		}
		//resto nao acentuado, pega caractere atual e converte para minuscula.
		frase[i] = tolower(frase[i]);
		i++;
	}
}
