//exercicio 3040 uri
//https://www.beecrowd.com.br/judge/pt/problems/view/3040
#include<stdio.h>

int main(){
	
	int altura, espessura, galhos, casos;

	scanf("%d", &casos);

	if(casos > 0 && casos < 10000){

		for(int i = 0; i < casos; i++){
			scanf("%d", &altura);
			scanf("%d", &espessura);
			scanf("%d", &galhos);

			if(altura >= 200 && altura <= 300 && espessura >= 50 && galhos >= 150){
				printf("Sim\n");
			}
			else 
				printf("Nao\n");

		}
	}
}
