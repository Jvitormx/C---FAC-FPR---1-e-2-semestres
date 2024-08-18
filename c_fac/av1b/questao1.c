/*
	FAETERJ-Rio
	FAC - 2023.2 - 06/12/2023
	João Vitor Marques Xavier

  Questão 4 - Turma B - Manhã
*/

//importação de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//definição de constantes
#define TAM 11

//protótipos das funções
void func(int tamanho, int vetNovo[], int *vetNovoTamanho, int vetDescartados[], int *vetDescartadosTamanho);
void exibir (int vetor[], int tamanho);

//main
int main(void)
{
     int vet[TAM]={3,4,8,1,9,15,12,4,20,22,10}, teste;
     int vetNovoMain[TAM]={3,4,8,1,9,15,12,4,20,22,10}, vetDescartadosMain[TAM];
     int vetNovoTamanho, vetDescartadosTamanho;

     func(TAM, vetNovoMain, &vetNovoTamanho, vetDescartadosMain, &vetDescartadosTamanho);

     exibir(vet, TAM);
     exibir(vetNovoMain, vetNovoTamanho);
     exibir(vetDescartadosMain, vetDescartadosTamanho);

     scanf("%d", &teste);
}

//implementação das funções

void func(int tamanho, int vetNovo[], int *vetNovoTamanho, int vetDescartados[], int *vetDescartadosTamanho)
{
     *vetNovoTamanho=tamanho;

    int i,j=0,k=0,aux;
    for(i=0;i<tamanho-1;i++){
    if(vetNovo[i]>vetNovo[i+1]){

    vetDescartados[k]=vetNovo[i+1];

    k++;//atualizando a quantidade de elementos no vetor
    (*vetNovoTamanho)--;

    for (j=i;j<*vetNovoTamanho;j++){
			{
				vetNovo[j+1]=vetNovo[j+2];
			}
		}
    }
    }

    *vetDescartadosTamanho=k;
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


