#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    char valor;
    struct No *ant;
    struct No *prox;
} TNo;
typedef TNo* TLista;

int inserir(TLista *L, int numero);
int inserirPos(TLista *L, int posicao, int numero);
int exibirInverso(TLista L);
void exibir(TLista L);

int main(void)
{
    TLista L;
    L=NULL;

    inserir(&L, 10);
    inserir(&L, 15);
    inserir(&L, 7);
    inserir(&L, 20);
    inserir(&L, 30);

    exibir(L);
}

void exibirInverso(TLista L)
{
    TLista aux;
    int valorAux;

    aux=L;

    while(aux)
    {
        aux=aux->prox;
    }


}

void exibir(TLista L)
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

int inserirPos(TLista *L, int posicao, int numero)
{
    TLista aux;
    TLista novo;
    int cont=1;

    if(posicao<1)
    {
        return 0;
    }else{
        if(posicao==1)
        {
            novo=(TLista)malloc(sizeof(TNo));
            novo->valor=numero;
            novo->prox=*L;

            *L=novo;
        }else{
            aux=*L;

            while((aux) && (cont<posicao-1))
            {

                aux=aux->prox;
                cont++;
            }

            if(!aux)
            {
                return 0;
            }else{
                novo=(TLista)malloc(sizeof(TNo));
                novo->valor=numero;
                novo->prox=aux->prox;
                aux->prox=novo;

                return 1;
            }
        }
    }

    return 0;
}
