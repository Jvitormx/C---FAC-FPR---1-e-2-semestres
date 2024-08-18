#include <stdio.h>

int esta_contido(char nome1[], char nome2[]);
int existe_arq(char nome[], int numero);
int tamanho_arq(char nome[]);

int main(void)
{
    if(esta_contido("texto1.txt","texto2.txt")==1)
    {
        printf("esta contido");
    }else{
        printf("nao esta contido");
    }
}

int existe_arq(char nome[], int numero)
{
    FILE *arq;
    int valor;

    arq=fopen(nome,"r");

    while(fscanf(arq,"%d",&valor)!=EOF)
    {
        if(valor==numero)
        {
            return 1;
        }
    }

    return 0;
}

int tamanho_arq(char nome[])
{
    FILE *arq;
    int valor, cont=0;

    arq=fopen(nome,"r");

    while(fscanf(arq,"%d",&valor)!=EOF)
    {
        cont++;
    }

    return cont;
}

int esta_contido(char nome1[], char nome2[])
{
    FILE *arq1, *arq2;
    int valor, quant, cont=0;

    arq1=fopen(nome1,"r");

    if(!arq1)
    {
        return 0;
    }else{
        quant=tamanho_arq(nome1);
        while(fscanf(arq1,"%d",&valor)!=EOF)
        {
            cont+=existe_arq(nome2, valor);
        }
    }

    if(quant==cont)
    {
        return 1;
    }

    return 0;
}
