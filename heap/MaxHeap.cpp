#include "MaxHeap.h"

	MaxHeap::MaxHeap(int max){
		h = new int[max];
		numElementos = 0;
		this->max = max;
	}

	MaxHeap::~MaxHeap(){
		delete[] h;
	}

	void MaxHeap::subir(int indice){
		int j;
		if(indice > 0){ ///verifica se o indice tem pai
			j = (indice - 1) / 2;
		
			//verifica se o filho é maior que o pai, se for, troca.
			if(h[indice] > h[j]){
				int aux = h[indice];
				h[indice] = h[j];
				h[j] = aux;

				subir(j);
			}
		}
	}

	void MaxHeap::descer(int indice){

		int j = 2 * indice + 1; //calcula o filho da esquerda

		if(j < numElementos){ //filho da esquerda existe
			if((j + 1) < numElementos){ //verifica se existe filho da direita
				if(h[j + 1] > h[j]){
					j++;
				}
			} 
			if(h[indice] < h[j]){
				int aux = h[indice];
				h[indice] = h[j];
				h[j] = aux;
			}

		}
	}
	void MaxHeap::constroiHeap(){

		int ultimo = (numElementos / 2) - 1;
		for(int i = ultimo; i >= 0; i--){
			descer(i);
		}
	}

	void MaxHeap::preencherAleatorio(int num){

		numElementos = num;

		srand(time(0));

		for(int i = 0; i < num; i++){
			h[i] = rand() % 101;
		}
	}

	void MaxHeap::imprimir(){

		if(numElementos == 0){
			cout << "Heap vazio";
		}else {
			for(int i = 0; i < numElementos; i++){
				cout << h[i] << " ";
			}
		}
			cout << endl;
	}

	void MaxHeap::inserir(int novo){
		if(numElementos < max){
			h[numElementos] = novo;
			subir(numElementos++);
		}else
			cout << "overflow\n";

	}

	void MaxHeap::remove(){

		int val = INT_MAX;

		if(numElementos > 0){
			val = h[0];
			h[0] = h[--numElementos];
			descer(0);
		}else
			cout << "underflow\n";

		return val;
	}