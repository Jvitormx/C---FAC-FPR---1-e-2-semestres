#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 6

int func(int vet[], int tamanho);
void preencherAleatorio (int vetor[], int tamanho);
void exibir (int vetor[], int tamanho);

int main(void)
{
    int n, vet[TAM]={1,2,3,4,5,1};

    printf("%d\n", func(vet, TAM));
}

int func(int vet[], int tamanho)
{
    int i,j, cont=0;
    for(i=0;i<tamanho;i++){
        for(j=0;j<tamanho;j++){
            if(vet[i]==vet[j]){
                cont++;
            }
        }
            if(cont>vet[i]){
                return 1;
            }else{
                cont=0;
            }
    }
    return 0;
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

