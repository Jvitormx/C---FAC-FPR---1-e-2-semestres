#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//definição de constantes
#define TAM 20

//protótipos das funções
int remover (int vetor[], int *quantidade, int numero);

void preencherAleatorio (int vetor[], int tamanho);
void exibir (int vetor[], int tamanho);

//main
int main(void)
{
	//declaração de variáveis
	int vetor[TAM];
	int num, remocoes, quant;

	//preenchendo o vetor de forma aleatória
	preencherAleatorio (vetor, TAM);
	quant = TAM;

	//exibir o vetor antes da remoção
	exibir (vetor, quant);

	//obtendo o valor a ser removido
	printf ("\n\nEntre com o valor a ser removido: ");
	scanf ("%d", &num);

	//chamando a função
	remocoes = remover (vetor, &quant, num);

	//exibir o vetor depois da remoção
	exibir (vetor, quant);
	printf ("\nForam realizadas %d remocoes do valor %d no vetor.", remocoes, num);
}

//implementação das funções
int remover (int vetor[], int *quantidade, int numero)
{
	//declaração de variáveis
	int i, j, cont = 0;

	//percorrendo o vetor
	for (i=0;i < *quantidade;)
	{
		//verificando se 'numero' foi encontrado
		if (vetor[i] == numero)
		{
			//deslocando uma posição para a esquerda todos os elementos que estão além da posição 'i'
			for (j=i;j< *quantidade-1;j++)
			{
				vetor[j] = vetor[j+1];
			}

			//atualizando a quantidade de remoções realizadas
			cont++;

			//atualizando a quantidade de elementos no vetor
			(*quantidade)--;
		}
		else
		{
			i++;
		}
	}

	//retornando a quantidade de remoções feitas
	return cont;
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
