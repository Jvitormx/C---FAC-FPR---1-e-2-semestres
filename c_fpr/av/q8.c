#include <stdio.h>
#include <string.h>

#define TAM 20

/*Implementar uma função que, dadas duas strings s1 e
s2, crie uma nova string – s3 – contendo todos os
caracteres de s1 que não estejam em s2.
Nota: em s3, não devem existir caracteres repetidos.*/

void resto(char s1[], char s2[], char s3[]);

int main(void)
{
    char s1[TAM], s2[TAM], s3[TAM];

    printf("s1: ");
    scanf(" %s", s1);

    printf("s1: ");
    scanf(" %s", s1);

    resto(s1, s2, s3);
}

void resto(char s1[], char s2[], char s3[])
{
    int i, j, k=0, tam1=strlen(s1), tam2=strlen(s2);

    if(tam1>tam2)
    {
        for(i=0;i<tam1;i++)
        {
            for(j=0;j<tam2;j++,k++)
            {
                if(s2[j]!=s1[i])
                {
                    s3[k]=s1[i];
                }
            }
        }
    }else{
        for(i=0;i<tam2;i++)
        {
            for(j=0;j<tam1;j++,k++)
            {
                if(s2[j]!=s1[i])
                {
                    s3[k]=s1[i];
                }
            }
        }
    }

    printf("%s", s3);
}
