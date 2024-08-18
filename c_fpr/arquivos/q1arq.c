#include <stdio.h>

/*Desenvolver uma função que, dado um arquivo
texto, verifique o número de caracteres no
mesmo.*/

int nChar(char nome[]);

int main(void)
{
    char nome[20];
    printf("nome: ");
    scanf("%s", nome);

    printf("%d\n", nChar(nome));
}

int nChar(char nome[])
{
    FILE *arq=fopen(nome, "r");

    int cont=0;
    char ch;

    if(!arq)
    {
        return -1;
    }else{
        while(fscanf(arq, "%c", &ch)!=EOF)
        {
            if(ch=='\n')
            {
                cont--;
            }
            cont++;
        }
    }

    fclose(arq);
    return cont;
}
