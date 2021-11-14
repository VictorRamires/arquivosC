#include<stdio.h>
#include<stdlib.h>

#define MAX 1000

int pai(int i)
	return(i-1)/2;

int Fesq(int i) 
	return i*2+1;

int Fdir(int i)
	return i*2+2;

void desce(int s[], int n, int pai){

	int e,d,maior,aux;
	e=Fesq(pai);
	d=Fdir(pai);

	if(e<n && s[e]>s[pai])
		maior = e;
	else 
    	maior=pai;

    if(d<n && s[d]>s[maior])
    	maior=d;
    
    if(maior!=pai){
    	aux=s[pai];
    	s[pai]=s[maior];
    	s[maior]=aux;
    	desce(s,n,maior);
    }

}  
void sobe (int s[],int n,int i){
int aux;
	while(s[pai(i)]<s[i]){
		aux=s[pai];
		s[pai]=s[i];
		s[i]=aux;
		i=pai[i];
	}
}
int constroi_heap(int s[],int n){
	int i,aux;
	for(i=pai(n-1);i>=0;i--)
		desce(s,n,i);
	
return 0;
}


void heapsort(int s[],int n){
	int i;
	int aux;
	constroi_heap(s,n);

	for(i=n-1;i>=0;i--){
		 aux=s[0];
		 s[0]=s[i];
		 s[i]=aux;
		desce(s,i,0);       
	}                       
}

int main (void){
	int v[MAX], tam;
	scanf("%d", &tam);

	for(int i = 0; i < tam; i++)
		scanf("%d", &v[i]);

    heapsort(v,tam);

	for(int i = 0; i < tam; i++)
		printf("%d ", v[i]);

		return 0;
}
