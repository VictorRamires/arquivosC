#include<stdlib.h>
#include<time.h>
#include<iostream>
#include<limits.h>

using namespace std;

class MaxHeap{
	
	private:
		int *h;
		int numElementos;
		int max;

	public:
		MaxHeap(int );
		~MaxHeap();
		void subir(int );
		void descer(int );
		void constroiHeap();
		void preencherAleatorio(int );
		void imprimir();
		void inserir(int );
		int remove();

};