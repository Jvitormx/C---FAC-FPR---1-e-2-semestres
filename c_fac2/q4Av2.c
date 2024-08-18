#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 7

void func(int n, int vet[], int tamanho);
void exibir (int vetor[], int tamanho);

int main(void)
{
    int n, vet1[TAM]={8,1,3,6,4,7,2};

	exibir(vet1,TAM);

	printf("n: ");
	scanf("%d", &n);

	func(n,vet1,TAM);

	exibir(vet1,TAM);

}

void func(int n, int vet[], int tamanho)
{
	int i,aux;
	for(i=0;i<tamanho;i++){
		if(vet[i]<=n){
			aux=
			vet[i-i]=vet[i];
		}
		if(vet[i]>n){
			aux=i;
			vet[i-aux]=vet[i];
		}
	}
}

void preencherAleatorio (int vetor[], int tamanho)
{
	//declaração de variáveis
	int i;

	srand (time(NULL));

	//percorrendo o vetor
	for (i=0;i<tamanho;i++)
	{
		vetor[i] = rand()%10;
	}
}

void exibir (int vetor[], int tamanho)
{
	//declaração de variáveis
	int i;

	//percorrendo o vetor
	for (i=0;i<tamanho;i++)
	{
		printf ("%d ", vetor[i]);
	}

	printf ("\n\n");
}
