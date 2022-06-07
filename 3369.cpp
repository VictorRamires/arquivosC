#include<stdio.h>
#include<set>
#include<iterator>
#include<iostream>
#include<string>

using namespace std;

int main(){

	set <char> inicial;
	set <string> palavras;
	string palavra;
	int casos;
	int tam;
	int a = 0;

	cout << "numero de casos: ";
	cin >> casos;
	for(int i = 0; i < casos; i++){
		cout << "palavra: ";
		cin >> palavra;
		inicial.insert(palavra[0]);
		palavras.insert(palavra);
	}
	for(auto i: palavras){
		tam = i.length();
		for(auto k: inicial){
			for(a = 0; a < tam; a++){
				if(i[a] == k){
					if(a == tam -1 ){
						cout << "Y" << "\n";
						return 0;
					}
				}
			}
		}
		a = 0;
	}
	cout << "N" << "\n";
}

		/*for(int j = 0; j < tam; j++){
				
			if(palavra[j] == i){
				if(j == tam - 1);
				cout << "tem";
			}
			else
				return 0;

			}*/