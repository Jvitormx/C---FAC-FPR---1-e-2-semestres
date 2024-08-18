#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    int valor;
    struct No *prox;
} TNo;

typedef TNo* TLista;

int empilhar(TLista *P, int numero);
int desempilhar(TLista *P);
TLista desempilhar_Tudo(TLista P, int *cont);
void exibir(TLista P);

int main(void)
{
    TLista P;
    int cont;
    P=NULL;

    empilhar(&P, 10);
    empilhar(&P, 20);
    empilhar(&P, 30);

    exibir(P);

    P=desempilhar_Tudo(P, &cont);

    printf("%d\n", cont);

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

TLista desempilhar_Tudo(TLista P, int *cont)
{
    TLista aux, aux2;
    int contA=0;
    aux=P;
    aux2=NULL;

    while(aux)
    {
        empilhar(&aux2, aux->valor);
        aux=aux->prox;
        desempilhar(&P);
        contA++;
    }

    *cont=contA;

    if(!P)
    {
        return P;
    }

    return 0;
}

int desempilhar(TLista *P)
{
    TLista aux;
    aux=*P;

    *P=(*P)->prox;

    free(aux);

    return 1;
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
