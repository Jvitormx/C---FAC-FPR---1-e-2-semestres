#include <stdio.h>

int criaArquivoSemRep(char nomeA[], char nomeB[]);
int retornarMenor(char nome[]);

int main(void)
{

}

int retornarMenor(char nome[])
{
    FILE *arq;
    int num, comp=9999;

    arq=fopen(nome, "r");

    while(fscanf(arq,"%f",&num)!=EOF)
    {
        if(num<comp)
        {
            comp=num;
        }
    }

    return comp;
}

int criaArquivoSemRep(char nomeA[], char nomeB[])
{
    FILE *arqA, *arqB;
    int num;

    arqA=fopen(nomeA, "r");
    arqB=fopen(nomeB, "w");

    if((!arqA)||(!arqB))
    {
        return 0;
    }else{
        while(fscanf(arqA,"%f",&num)!=EOF)
        {
            if(retornarMenor())
        }
    }
}
