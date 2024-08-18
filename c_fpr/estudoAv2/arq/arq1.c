#include <stdio.h>

int main(void)
{
    FILE *arq;
    int i;

    arq=fopen("teste.txt","w"); //w: write , cria | r: read , abre arquivo existente | a: append , atualiza arquivo existente

    if(!arq)
    {
        printf("\nArquivo nao foi aberto");
    }else{
        for(i=1;i<=1000;i++)
        {
            fprintf(arq, "%d\n", i); //f: file printf
        }

        fclose(arq);
    }
}
