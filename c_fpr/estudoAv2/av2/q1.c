#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    int valor;
    struct No *prox;
} TNo;

typedef TNo* TLista;

int enfilar(TLista *F, TLista *U, int numero);
int desenfilar(TLista *F, TLista *U);
TLista removerDivisores(TLista F, TLista U, int numero_divisor, int *cont);
void exibir(TLista F);

int main(void)
{
    TLista F, U;
    int cont;
    F=NULL;
    U=NULL;

    enfilar(&F, &U, 10);
    enfilar(&F, &U, 22);
    enfilar(&F, &U, 30);
    enfilar(&F, &U, 37);
    enfilar(&F, &U, 35);

    exibir(F);

    F=removerDivisores(F, U, 5, &cont);

    printf("%d\n", cont);

    exibir(F);
}

TLista removerDivisores(TLista F, TLista U, int numero_divisor, int *cont)
{
    TLista aux, aux2, auxF=NULL, auxU=NULL;
    int contA=0;

    aux=F;

    while(aux)
    {
        if(aux->valor%numero_divisor!=0)
        {
            enfilar(&auxF, &auxU, aux->valor);
            desenfilar(&F, &U);
        }
        aux=aux->prox;
    }

    aux2=F;
    while(aux2)
    {
        aux2=aux2->prox;
        contA++;
    }

    *cont=contA;

    return auxF;
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
