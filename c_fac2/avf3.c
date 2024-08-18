#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 9
int func(int vet1[], int tamanho);
void preencherAleatorio (int vetor[], int tamanho);
void exibir (int vetor[], int tamanho);

int main(void)
{
    int vet1[TAM]={3,1,2,2,2,3,4,4,2};

    printf("%d", func(vet1,TAM));
}

int func(int vet1[], int tamanho)
{
    int i, valor=0;
    for(i=0;i<tamanho;i++){
        valor=vet1[i]
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

