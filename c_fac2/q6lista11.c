#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
void func(int a, int b, int array[], int tamanho);

void preencherAleatorio (int vetor[], int tamanho);
void exibir (int vetor[], int tamanho);

int main(void)
{
    int a,b, vet[TAM];

    preencherAleatorio(vet,TAM);

    exibir(vet,TAM);

    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);

    func(a,b,vet, TAM);

    exibir(vet,TAM);

}

void func(int a, int b, int array[], int tamanho)
{
    int i;
    for(i=0;i<9;i++){
        if(array[i]==a){
            array[i]=b;
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
