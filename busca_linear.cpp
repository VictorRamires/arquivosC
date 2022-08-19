#include<stdio.h>
#include<iostream>

using namespace std;

int busca(int a, int *vet){
	int i = 0, aux;
	
	while(aux != a){
		aux = vet[i];
		i++;
	}
	return i - 1;
}
	


int main(){

	int tam, a; cin >> tam;	
	int *vet;

	vet = new int [tam];

	for(int i = 0; i < tam; i++){
		cin >> vet[i];
	}
	cin >> a;

	cout << "a está na posição:" << busca(a, vet);
}