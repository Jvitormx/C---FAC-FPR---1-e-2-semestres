#include <stdio.h>
#include <string.h>

/*Implementar uma função que, dada uma string s,
determine a quantidade de caracteres distintos em s.*/

int distintos(char s[]);

int main(void)
{
    char s[20];
    printf("s: ");
    scanf("%s", s);

    printf("%d\n", distintos(s));
}

int distintos(char s[])
{
    int i, j, cont=0, quant=strlen(s);
    for(i=0;i<strlen(s)-1;i++)
    {
        for(j=i+1;j<strlen(s);j++)
        {
            if(s[i]==s[j])
            {
                cont++;
            }
        }
    }

    return quant-cont;
}
