#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

void func(int n, float vet[], int tamanho, float *menor, float *maior);
void exibir (float vetor[], int tamanho);
void preencherAleatorio (float vetor[], int tamanho);

int main(void)
{
    int n;
    float vet[TAM]={1.0, 4.0, 7.0, 6.0, 3.0, 2.0, 8.0, 5.0, 5.0, 5.0}, maior, menor;

    exibir(vet,TAM);

    printf("n: ");
    scanf("%d", &n);

    func(n, vet, TAM, &maior, &menor);

    printf("menor entre os maiores: %1.f\n", maior);
    printf("maior entre os menores: %1.f\n", menor);

}

void func(int n, float vet[], int tamanho, float *menor, float *maior)
{
    *maior=-9999;
    *menor=9999;

    int i;
    for(i=0;i<tamanho;i++){
        if(vet[i]<n){
            if(vet[i]>*maior){
                *maior=vet[i];
            }
        }else{
            if(vet[i]>n){
                if(vet[i]<*menor){
                    *menor=vet[i];
                }
            }
        }
    }
}

void preencherAleatorio (float vetor[], int tamanho)
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

void exibir (float vetor[], int tamanho)
{
	//declaração de variáveis
	int i;

	//percorrendo o vetor
	for (i=0;i<tamanho;i++)
	{
		printf ("%.1f ", vetor[i]);
	}

	printf ("\n\n");
}
