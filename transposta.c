//Programa: transposta.c

//Declaração das bibliotecas utilizadas
#include<stdio.h>
#define MAX 100
//Inicio da função principal
int main (void){
//Declaração das variáveis
int linhas[MAX], colunas[MAX];
//int matrizinv1[100][100], matrizinv2[100][100];
int matriz1[MAX][MAX],matriz2[MAX][MAX];
int matriz3[MAX][MAX],matriz4[MAX][MAX];
int qtdlinhas, qtdcolunas;
int qtdmat;

//Passo 1. Leia a quantidade de matriz
scanf("%d", &qtdmat);
//Passo 1.1. Leia a quantidade de linhas

//Passo 1.2. Leia a quantidade de colunas

//Passo 1.3. Leia as linhas e as colunas
for(int m = 0; m < qtdmat; m++){
        scanf("%d", &qtdlinhas);
        scanf("%d", &qtdcolunas);
    for(int linha = 0; linha < qtdlinhas; linha++){
        for(int coluna = 0; coluna < qtdcolunas; coluna++){
            scanf("%d", &matriz1[linha][coluna]);
        }
    }

//Passo 2. Inverta a matriz inserida
   for(int linha = 0; linha < qtdcolunas; linha++){
        for(int coluna = 0; coluna < qtdlinhas; coluna++){
            matriz3[coluna][linha] = matriz1[coluna][linha];
            printf("%d ", matriz3[coluna][linha]);

       }
       printf("\n");
   }
   }
   /*
   printf("\n");
    for(int linha = 0; linha < qtdcolunas; linha++){
        for(int coluna = 0; coluna < qtdlinhas; coluna++){
            matriz4[coluna][linha] = matriz2[coluna][linha];
            printf("%d ", matriz4[coluna][linha]);
       }
        printf("\n");
   }
    printf("\n");
   */

    return 0;
}