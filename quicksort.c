#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int quick(int , int , int []);

void quicksort(int inicio, int fim, int *v){

	int pivo;

	if(fim > inicio){
		pivo = quick(inicio, fim, v);
		quicksort(inicio, pivo - 1, v);
		quicksort(pivo + 1, fim, v);
	}
}

int quick(int inicio, int fim, int vet[]){

	int esq, dir, pivo, aux;

	esq = inicio;
	dir = fim;
	pivo = vet[inicio];

	while(esq < dir){
		
		while(esq <= fim && vet[esq] <= pivo)
            esq++;

        while(dir >= 0 && vet[dir] > pivo)
            dir--;

		if(esq < dir){
			aux = vet[esq];
			vet[esq] = vet[dir];
			vet[dir] = aux;  
		}
	}
	vet[inicio] = vet[dir];
	vet[dir] = pivo;

	return dir;

}

int main(){

	int *v, n;

	printf("tamanho do vetor\n");
	scanf("%d", &n);

	v = (int*) malloc(n * sizeof(int));

	for(int i = 0; i < n; i++){
		scanf("%d", (v + i));
	}

	quicksort(0,n,v);


	for(int i = 0; i < n; i++){
		printf("%d ", *(v + i));
	}
}