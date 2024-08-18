#include <stdio.h>
#include <ctype.h>

/*Desenvolver uma função que, dado um arquivo
texto, verifique o número de letras existentes
no mesmo (entendendo que no arquivo podem
existir letras, algarismos e símbolos).*/

int numLetras(char nome[]);

int main(void)
{
    char nome[10];

    printf("nome: ");
    scanf("%s", nome);

    printf("%d\n", numLetras(nome));
}

int numLetras(char nome[])
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
            if((toupper(c)>=65) && (toupper(c)<=90))
            {
                cont++;
            }
        }

        return cont;
    }
}
