#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    int valor;
    struct No *prox;
} TNo;

typedef TNo* TLista;

//protótipos das funções
void copiarListas (TLista origem, TLista *destino);

int inserir (TLista *L, int numero);
void exibir (TLista L);

int main(void)
{

	//declaração de variáveis
	TLista L1 = NULL, L2 = NULL;

	//inserindo elementos em L1
	inserir (&L1, 10);
	inserir (&L1, 15);
	inserir (&L1, 20);

	//exibindo as listas antes da cópia
	printf ("Exibindo as listas antes da copia:\n\n");
	exibir (L1);
	exibir (L2);

	//chamando a função
	copiarListas (L1, &L2);

	//exibindo as listas após a cópia
	printf ("\n\nExibindo as listas apos a copia:\n\n");
	exibir (L1);
	exibir (L2);
}

//implementação das funções
void copiarListas (TLista origem, TLista *destino)
{
	//declaração de variáveis
	TLista auxO = origem, auxD, novo;

	//garantindo que a lista destino está vazia
	*destino = NULL;

	//percorrendo os elementos da lista origem
	while (auxO)
	{
		//alocando memória para guardar o valor apontado por 'auxO'
		novo = (TLista) malloc (sizeof(TNo));

		//copiando o valor apontado por 'auxO' para a nova memória
		novo->valor = auxO->valor;
		novo->prox = NULL;

		//se estiver inserindo o primeiro valor na lista de destino...
		if (*destino == NULL)
		{
			*destino = novo;
			auxD = novo;
		}
		else
		{
			auxD->prox = novo;

			//mandando 'auxD' apontar para o novo elemento
			auxD = novo;
		}

		//atualizando auxO
		auxO = auxO->prox;
	}
}

int inserir (TLista *L, int numero)
{
	//declaração de variáveis
	TLista novo;

	//Passo 1: alocar memória para o novo nó
	novo = (TLista) malloc (sizeof(TNo));   //memory allocation

	//verificando se houve erro na alocação de memória
	//if (novo == NULL)
	if (!novo)
	{
		return 0;
	}
	else
	{
		//Passo 2: inserir 'numero' no nó recém-alocado
		novo->valor = numero;

		//Passo 3: fazer o campo 'prox' do novo nó apontar para o "antigo primeiro nó"
		novo->prox = *L;

		//Passo 4: fazer o novo nó se tornar o primeiro da lista
		*L = novo;

		return 1;
	}
}

void exibir (TLista L)
{
	//declaração de variáveis
	TLista aux;

	//verificando se a lista está vazia
	if (L == NULL)
	{
		printf ("Lista vazia!\n");
	}
	else
	{
		//fazendo 'aux' apontar para o primeiro nó da lista
		aux = L;

		printf ("\nLista: ");

		//percorrendo toda a lista (ou seja, até 'aux' chegar a NULL)
		while (aux != NULL)
		{
			//exibir o valor apontando por 'aux'
			printf ("%d ", aux->valor);

			//atualizar o 'aux'
			aux = aux->prox;
		}

		printf ("\n\n");
	}
}
