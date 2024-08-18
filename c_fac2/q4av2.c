#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 7

void func(int vet1[], int vet2[], int resultado[], int tamanho);
void exibir (int vetor[], int tamanho);
void preencherAleatorio (int vetor[], int tamanho);

int main(void)
{
    int vet1[TAM]={8,1,3,6,4,7,2}, vet2[TAM]={1,5,2,7,0,4,6}, resultado[TAM];

    func(vet1,vet2,resultado,TAM);

    exibir(resultado, TAM);

}

void func(int vet1[], int vet2[], int resultado[], int tamanho)
{
    int i, size=tamanho-1, aux;
    for(i=0;i<tamanho;i++){
        if(vet1[size]+vet2[size]<=9){
            resultado[size]=vet1[size]+vet2[size];
            size--;
        }else{
            aux=vet1[size]+vet2[size];
            size--;
            vet1[size]++;
            resultado[size]=aux%10;
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
