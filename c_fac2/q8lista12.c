#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 12

void func(int vet[], int tamanho);
void exibir (int vetor[], int tamanho);
int verifica(int vet[], int tamanho, int n);

int main(void)
{
    int vet[TAM]={3,5,1,3,2,5,7,3,4,7,6,1};

    func(vet, TAM);


}

int verifica(int vet[], int tamanho, int n)
{
    int i;
    for(i=0;i<tamanho;i++){
        if(n==vet[i]){
            return 0;
        }
    }
    return 1;
}

void func(int vet[], int tamanho)
{
    int i, j, aux[tamanho], cont=0;
    for(i=0;i<tamanho;i++){
        if(verifica(aux, tamanho, vet[i])==0){
            break;
            }
        for(j=0;j<tamanho;j++){
            if(vet[i]==vet[j]){
                aux[i]=vet[i];
                cont++;
            }
        }
        printf("%d:%d\n", vet[i], cont);
        cont=0;
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
