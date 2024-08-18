#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    int valor;
    struct No *prox;
} TNo;
typedef TNo* TLista;

int inserir(TLista *L, int numero);
void exibir (TLista L);
int verificar(TLista L1, TLista L2);

int main(void)
{
    TLista L1=NULL, L2=NULL;

    inserir(&L1, 10);
    inserir(&L1, 15);
    inserir(&L1, 20);

    inserir(&L2, 10);
    inserir(&L2, 35);
    inserir(&L2, 20);

    exibir(L1);

    exibir(L2);

    if(verificar(L1, L2))
    {
        printf("são iguais.\n");
    }else{
        printf("não são iguais.\n");
    }

}

int verificar(TLista L1, TLista L2)
{
    TLista aux1, aux2;

    aux1=L1;
    aux2=L2;

    while((aux1 != NULL) && (aux2 != NULL))
    {
        if(aux1->valor!=aux2->valor)
        {
            return 0;
        }
        aux1=aux1->prox;
        aux2=aux2->prox;
    }

    return 1;
}

void exibir(TLista L)
{
    TLista aux;
    aux=L;

    while(aux != NULL)
    {
        printf("%d ", aux->valor);
        aux=aux->prox;
    }
    printf("\n");
}

int inserir(TLista *L, int numero)
{
    TLista novo;

    novo=(TLista) malloc (sizeof(TNo));

    novo->valor=numero;
    novo->prox=*L;

    *L=novo;

    return 1;
}
