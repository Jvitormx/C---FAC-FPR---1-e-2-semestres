#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    int valor;
    struct No *prox;
} TNo;

typedef TNo* TLista;

int empilhar(TLista *P, int numero);
int remocao(TLista P, int numero);
int desempilhar(TLista *P);
int topo(TLista P);
void exibir(TLista P);

int main(void)
{
    TLista P;
    int num;
    P=NULL;

    empilhar(&P, 10);
    empilhar(&P, 15);
    empilhar(&P, 20);
    empilhar(&P, 20);
    empilhar(&P, 13);
    empilhar(&P, 20);
    empilhar(&P, 13);

    exibir(P);

    remocao(P, 20);

    exibir(P);
}

void exibir(TLista P)
{
    TLista aux;
    aux=P;
    while(aux)
    {
        printf("%d ", aux->valor);
        aux=aux->prox;
    }
    printf("\n");
}

int remocao(TLista P, int numero)
{
    TLista aux, P2=NULL;;
    int valor;

    aux=P;

    while(aux)
    {
        valor=desempilhar(&aux);
        if(valor!=numero)
        {
            empilhar(&P2, valor);
        }
    }

    P=NULL;

    while(P2)
    {
        valor=desempilhar(&P2);
        empilhar(&P, valor);
    }

    return 1;
}

int desempilhar(TLista *P)
{
    TLista aux;
    int valor;

    valor=(*P)->valor;
    aux=*P;

    *P=(*P)->prox;

    free(aux);

    return valor;
}

int topo(TLista P)
{
    return P->valor;
}

int empilhar(TLista *P, int numero)
{
    TLista novo;
    novo=(TLista)malloc(sizeof(TNo));

    if(!novo)
    {
        return 0;
    }else{
        novo->valor=numero;
        novo->prox=*P;

        *P=novo;
    }

    return 1;
}
