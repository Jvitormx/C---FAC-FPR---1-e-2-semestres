#include <stdio.h>

/*Desenvolver uma função que, dado um arquivo
texto, verifique o número de vezes que um
determinado caracter aparece no arquivo.*/

int numChar(char nome[], char ch);

int main(void)
{
    char nome[10], ch;

    printf("nome: ");
    scanf(" %s", nome);

    printf("caracter: ");
    scanf(" %c", &ch);

    printf("%d\n", numChar(nome, ch));
}

int numChar(char nome[], char ch)
{
    FILE *arq=fopen(nome, "r");
    char c;
    int cont=0;

    if(!arq)
    {
        return 0;
    }else{
        while(fscanf(arq, "%c", &c)!=EOF)
        {
            if(c==ch)
            {
                cont++;
            }
        }

        return cont;
    }
}
