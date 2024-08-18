#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 300

void func(int array[], int tamanho, int par[], int *tamPar, int impar[], int *tamImp);
void exibir (int vetor[], int tamanho);
void preencherAleatorio (int vetor[], int tamanho);

int main(void)
{
    int vet[TAM], par[TAM], impar[TAM], quantP, quantI;

    preencherAleatorio(vet,TAM);
    exibir(vet, TAM);

    func(vet, TAM, par, &quantP, impar, &quantI);

    exibir(par, quantP);

    exibir(impar, quantI);
}

void func(int array[], int tamanho, int par[], int *tamPar, int impar[], int *tamImp)
{
    int i, p=0, im=0;

    for(i=0;i<tamanho;i++){
        if(array[i]%2==0){
            par[p]=array[i];
            p++;
        }else{
            impar[im]=array[i];
            im++;
        }
    }

    *tamPar=p;
    *tamImp=im;

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
