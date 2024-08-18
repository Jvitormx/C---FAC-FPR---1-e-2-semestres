#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    int valor;
    struct No *prox;
} TNo;

typedef TNo* TLista;

int enfilar(TLista *F, TLista *U, int numero);
int desenfilar(TLista *F, TLista *U, int *numero);
int primeiro(TLista F, int *p);
void exibir(TLista F);

int main(void)
{
    TLista F, U;
    enfilar(&F, &U, 10);
    enfilar(&F, &U, 20);
    enfilar(&F, &U, 30);

    exibir(F);
}

int enfilar(TLista *F, TLista *U, int numero)
{
    TLista novo;
    novo=(TLista)malloc(sizeof(TNo));

    novo->valor = numero;

		//Passo 3: fazendo o campo 'prox' do novo nó apontar para NULL (afinal, estamos inserindo no final da fila)
		novo->prox = NULL;

		//Passo 4: fazendo o "antigo último nó" apontar para o novo
		if (*U)  //ou     if (*F)
		{
			(*U)->prox = novo;
		}
		else
		{
			*F = novo;  //inserindo o primeiro elemento na fila
		}

		//Passo 5: atualizando 'U' de forma que aponte para o novo nó
		*U = novo;

		return 1;
}

void exibir(TLista F)
{
    TLista aux;
    aux=F;
    while(aux)
    {
        printf("%d\n", aux->valor);
        aux=aux->prox;
    }
}

int desenfilar(TLista *F, TLista *U, int *numero)
{
    return 1;
}
int primeiro(TLista F, int *p)
{
    return 1;
}
