#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    int valor;
    struct No *prox;
} TNo;

typedef TNo* TLista;

int empilhar(TLista *P, int numero);
int desempilhar(TLista *P, int *num);
void topo(TLista P, int *num);

int main(void)
{
    TLista P;
    int num;
    P=NULL;

    empilhar(&P, 10);
    empilhar(&P, 15);
    empilhar(&P, 20);

    topo(P, &num);

    printf("%d\n", num);

    printf("\n");

    desempilhar(&P, &num);

    topo(P, &num);

    printf("%d\n", num);
}

int desempilhar(TLista *P, int *num)
{
    TLista aux;
    aux=*P;

    *P=aux->prox;

    free(aux);

    return 1;
}

void topo(TLista P, int *num)
{
    *num=P->valor;
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
