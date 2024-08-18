#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    int valor;
    struct No *prox;
} TNo;
typedef TNo* TLista;

int inserir(TLista *L, int numero);
int buscar(TLista L, int numero);
int comp(TLista L1, TLista L2);
int verificar(TLista L1, TLista L2);

int main(void)
{
    TLista L1=NULL, L2=NULL;

    inserir(&L1, 10);
    inserir(&L1, 15);
    inserir(&L1, 20);

    inserir(&L2, 15);
    inserir(&L2, 20);
    inserir(&L2, 55);

    if(verificar(L1, L2)==1)
    {
        printf("irado");
    }else{
        printf("boo");
    }

}

int verificar(TLista L1, TLista L2)
{
    return((comp(L1, L2)==1) && (comp(L2, L1)==1));
}

int comp(TLista L1, TLista L2)
{
    TLista aux;
    aux=L1;

    while(aux)
    {
        if(buscar(L2, aux->valor)==0)
        {
            return 0;
        }
        aux=aux->prox;
    }

    return 1;
}

int buscar(TLista L, int numero)
{
    TLista aux;
    aux=L;

    while(aux!=NULL)
    {
        if(aux->valor==numero)
        {
            return 1;
        }
        aux=aux->prox;
    }

    return 0;
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
