#include <stdio.h>
#include <string.h>

/*Implementar uma função que remova todas as ocorrências de determinado
caracter em uma string.*/

int remover(char s[], char ch);

int main(void)
{
    char s[10], ch;

    printf("s: ");
    scanf(" %s", s);

    printf("ch: ");
    scanf(" %c", &ch);

    printf("%d\n", remover(s, ch));

    printf("%s\n", s);
}

int remover(char s[], char ch)
{
    int i, j, tam=strlen(s), cont=0;
    for(i=0;i<tam;i++)
    {
        if(s[i]==ch)
        {
            for(j=i;j<tam;j++)
            {
                s[j]=s[j+1];
            }
            cont++;
        }
    }

    return cont;
}
