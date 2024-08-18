#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 50

void func(int vet[], int tamanho);
void exibir (int vetor[], int tamanho);

int main(void)
{
    int i, vec[TAM];

    func(vec, TAM);

    exibir(vec,TAM);

}

void func(int vet[], int tamanho)
{
    int i,j=1;
    for(i=0;i<tamanho;i++,j+=i){
        vet[i]=j;
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
