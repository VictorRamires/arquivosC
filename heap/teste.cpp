#include "MaxHeap.h"

int main(){

	int tamMax;

	cin >> tamMax;

	//declara o ponteiro e aloca o heap
	MaxHeap *heap =	new MaxHeap(tamMax);
	
	int num;
	cin >> num;

	cout << "vetor gerado" << " ";
	heap->preencherAleatorio(num);
	heap->imprimir();

	cout << "vetor arrumado" << " ";
	heap->constroiHeap();
	heap->imprimir();


	//desaloca o heap
	delete(heap);

}