#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    int valor;
    struct No *prox;
} TNo;

typedef TNo* TLista;

int enfilar(TLista *F, TLista *U, int numero);
int desenfilar(TLista *F, TLista *U);
TLista copiar(TLista F1, TLista F2, TLista F2U);
void exibir(TLista F);

int main(void)
{
    TLista F=NULL, U=NULL;
    TLista F2=NULL, F2U=NULL;

    int cont;
    F=NULL;
    U=NULL;

    enfilar(&F, &U, 10);
    enfilar(&F, &U, 22);
    enfilar(&F, &U, 30);
    enfilar(&F, &U, 37);
    enfilar(&F, &U, 35);

    exibir(F);

    F2=copiar(F, F2, F2U);

    exibir(F2);
}

TLista copiar(TLista F1, TLista F2U)
{
    TLista aux, F2, F2_U;
    aux=F1;

    while(aux)
    {
        enfilar(&F2, &F2U, aux->valor);
        aux=aux->prox;
    }

    return F2;
}

int desenfilar(TLista *F, TLista *U)
{
    TLista aux;
    aux=*F;

    aux=(*F)->prox;

    free(*F);

    *F=aux;

    if(!(*F))
    {
        *U=NULL;
    }

    return 1;
}

void exibir(TLista F)
{
    TLista aux;
    aux=F;
    while(aux)
    {
        printf("%d ", aux->valor);
        aux=aux->prox;
    }
    printf("\n");
}

int enfilar(TLista *F, TLista *U, int numero)
{
    TLista novo;
    novo=(TLista)malloc(sizeof(TNo));

    novo->valor=numero;
    novo->prox=NULL;

    if(*F)
    {
        (*U)->prox=novo;
    }else{
        *F=novo;
    }

    *U=novo;

    return 1;
}
