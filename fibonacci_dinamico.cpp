#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//tamanho 50 pois após isso estoura a memoria
int memo[50];

int fib(int n){
//fibonacci normalmente
	if(n <= 2)	return 1; 

//Em termos semânticos, ao passar a variável para uma função onde o parâmetro é uma referência,
//o endereço da variável é atribuído ao endereço do parâmetro. 
//Desta forma, o parâmetro é a mesma variável passada, 
//no trecho de código onde a função foi invocada, assumindo um nome diferente dentro da função. 
//Podemos dizer que a variável assume um apelídio dentro da função,
//sendo a mesma com nome diferente apenas.

	int &valor = memo[n];
	cout << "memo[n] = " << memo[n] << endl;
//verifica se já há algum valor armazenado no vetor
	if(valor != -1) return valor;

	return valor = fib(n - 1) + fib(n - 2);

}

int main(){

	//seta o valor inteiro de memo com -1
	memset(memo, -1, sizeof memo);
	
	int a; cin >> a;
	cout << fib(a) << endl;
}