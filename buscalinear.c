#include<stdio.h>

int main(){

	int v[5];
	int k , l; //k maior, l menor
	int aux1 = 0, aux2 = 0;


	for(int i = 0; i < 5; i++){
		scanf("%d", &v[i]);
	}

	printf("%d %d\n", k, l);
	printf("%d %d\n", maior, menor);

	for(int i = 0, j = 4; i != j; i++, j--){
		aux1 = v[i];
		v[i] = v[l];
		v[l] = aux1;

		aux2 = v[j];
		v[j] = v[k];
		v[k] = aux2;
	}

	for(int i = 0; i < 5; i++){
		printf("%d", v[i]);
	}
	menor(v);
}


void menor(int v[]){

	for(int i = 0; i < 5; i++){
		if(v[i] > maior){
			maior = v[i];
			k = i;
		}
	}
	return 0;
}	
