#include <stdio.h>

int main(){

	int matriz[100][100];
	int n, i, j = 0, somadiagonal = 0, aux = 0, secundaria;

	scanf("%d", &n);

	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			scanf("%d", &matriz[i][j]);
		}
	}

	//diagonal principal.
	j = 0;
	for(i = 0; i < n; i++){		
		somadiagonal = somadiagonal + matriz[i][j];
		++j;
	}
	
	//permuta coluna	
	for(j = 0; j < n; j++){
		aux = 0;
		for(i = 0; i < n; i++){
			aux = aux + matriz[i][j];			
		}
		if(aux != somadiagonal){
			printf("nao magico");
			return 0;
		}
	}
	
	//diagonal secundaria
	j = n - 1;
	secundaria = 0;
	for(i = 0; i < n; i++){
		secundaria = secundaria + matriz[i][j];
		j--;
	}
	if(secundaria != somadiagonal){
		printf("nao magico");
		return 0;
	}

	//permuta linha.
	for(i = 0; i < n; i++){
		secundaria = 0;
		for(j = 0; j < n; j++){
			secundaria = secundaria + matriz[i][j];
		}
		if(secundaria != somadiagonal){
			printf("nao magico");
			return 0;
		}
	}
	printf("eh um quadrado magico\n");
}