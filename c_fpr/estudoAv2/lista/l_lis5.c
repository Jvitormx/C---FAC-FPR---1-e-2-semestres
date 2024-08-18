#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    int valor;
    struct No *prox;
} TNo;
typedef TNo* TLista;

20
30
10

103020 103020

10
30
20
int verificar_Ordenacao(TLista L);
int inserir(TLista *L, int numero);
void exibit(TLista L);

int main(void)
{
    TLista L;
    L=NULL;

    inserir(&L, 10);
    inserir(&L, 7);
    inserir(&L, 20);

    if(verificar_Ordenacao(L)==1)
    {
        printf("ordenado.\n");
    }else{
        printf("desordenado.\n");
    }
}

int verificar_Ordenacao(TLista L)
{
    TLista aux;
    int maior=9999;
    aux=L;

    while(aux)
    {
        if(aux->valor<maior)
        {
            maior=aux->valor;
        }else{
            return 0;
        }
        aux=aux->prox;
    }

    return 1;
}

void exibit(TLista L)
{
    TLista aux;
    aux=L;
    while(aux)
    {
        printf("%d\n", aux->valor);
        aux=aux->prox;
    }
}

int inserir(TLista *L, int numero)
{
    TLista novo;
    novo=(TLista)malloc(sizeof(TNo));

    novo->valor=numero;
    novo->prox=*L;

    *L=novo;

    return 1;
}
