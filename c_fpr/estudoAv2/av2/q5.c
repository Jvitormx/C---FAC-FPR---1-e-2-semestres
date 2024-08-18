#include <stdio.h>

int ordenar(char nome[]);

int main(void)
{
    ordenar("testeC.txt");
}

int ordenar(char nome[])
{
    FILE *arq, *arqNovo, *arqDescartados;
    int valor, maiorValor, antigo;

    arq=fopen(nome,"r");

    arqNovo=fopen("novo.txt","w");

    arqDescartados=fopen("descartados.txt","w");

    maiorValor=-9999;

    while(fscanf(arq,"%d",&valor)!=EOF)
    {
        if(maiorValor>valor)
        {
            fprintf(arqDescartados,"%d\n",valor);
        }else{
            maiorValor=valor;
            fprintf(arqNovo,"%d\n",valor);
        }
    }

    return 1;
}
