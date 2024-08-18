#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void func(int n, int *tamanho);
void func2(int n, int vet[]);
void preencherAleatorio (int vetor[], int tamanho);
void exibir (int vetor[], int tamanho);

int main(void)
{
    int n, tamanho=1, vet[tamanho];

    printf("n: ");
    scanf("%d", &n);

    func(n,&tamanho);

    func2(n,vet);

    exibir(vet, tamanho);
}

void func(int n, int *tamanho)
{
    int i,cont=0;
    for(i=1;i<=n;i++){
        if(n%i==0){
            cont++;
        }
    }
    *tamanho=cont;
}

void func2(int n, int vet[])
{
    int i,j;
    for(i=1,j=0;i<=n;i++){
        if(n%i==0){
            vet[j]=i;
            j++;
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

