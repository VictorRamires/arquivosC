#include <stdio.h>
#include <string.h>
#define MAX 100

typedef struct produto{
	double kg;
	char k;
	double valor;
	char nome[MAX+1];
};

struct frase{
	char nome[MAX+1];
};

void cadastra(struct produto marquinhos[MAX], int *n, int *j){ 
	for(; *n<*j; ++*n){
		scanf("%s %c %lf %lf", marquinhos[*n].nome, &marquinhos[*n].k, &marquinhos[*n].kg, &marquinhos[*n].valor);
	}
}

void lista_struct(struct produto marquinhos[MAX], int *j){     
	int i=0, k=*j;     
	for(i=0;i<k-1; ++i){      
		if(marquinhos[i].kg != 0 && marquinhos[i].nome[0] != '\0')   
	 		printf("%s\n%g\n%.2f\n", marquinhos[i].nome, marquinhos[i].kg, marquinhos[i].valor);
	} 
}

int procura_produto(struct produto atual[], struct frase procurando){
	int i=0;
	for(i=0; i<100; ++i){
		if(strcmp(procurando.nome, atual[i].nome)== 0){
			printf("%s\n%g\n%.2f\n", atual[i].nome, atual[i].kg, atual[i].valor);
			return 0;
		}
	}
	return 1;
}

void remove_produto(struct produto atual[], struct frase procurando){
	int i=0;
	for(i=0; i<100; ++i){
		if(strcmp(procurando.nome, atual[i].nome)== 0){
			atual[i].kg = 0;
			atual[i].valor = 0.0;
			atual[i].nome[0] = '\0';
		}
	}
}

int main (){
	struct produto atual[MAX];
	int n=0, j=1, op;
	struct frase procurando;

	while(1){
		scanf("%d", &op);
		if(op==0)
			return 0;
		switch(op){
		case 1: cadastra(atual, &n, &j);
			++j;
			break;
		
		case 2: lista_struct(atual, &j);
			break;

		case 3: scanf("%s", procurando.nome);
			procura_produto(atual, procurando);
			break;

		case 4: scanf("%s", procurando.nome);
			remove_produto(atual, procurando);
			break;
		case 5:
			return 0;

		default:
			printf("Opção Inválida!\n");
			break;

		}
	}

	return 0;
}