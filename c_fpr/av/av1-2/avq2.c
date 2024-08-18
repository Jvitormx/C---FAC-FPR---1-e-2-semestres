#include <stdio.h>
#include <string.h>

/*Implementar uma função que, dadas duas strings s1 e
s2, crie uma nova string – s3 – contendo todos os
caracteres de s1 que não estejam em s2.
Nota: em s3, não devem existir caracteres repetidos.*/

void novaS(char s1[], char s2[]);

int main(void)
{
    char s1[10], s2[10];

    printf("s1: ");
    scanf(" %s", s1);
    printf("s2: ");
    scanf(" %s", s2);

    novaS(s1, s2);

}


void novaS(char s1[], char s2[])
{
    int i, j, k, tam=strlen(s1), aux=0;
    char s3[tam];
    for(i=0;i<strlen(s2);i++)
    {
        for(j=0;j<strlen(s1);j++)
        {
            if(s2[i]!=s1[j])
            {
                if(aux>0)
                {
                    for(k=0;k<aux;k++)
                    {
                        if(s1[j]!=s3[k])
                        {
                            s3[aux]=s1[j];
                            aux++;
                        }
                    }
                }else{
                    s3[aux]=s1[j];
                    aux++;
                }
            }
        }
    }

    printf("%s\n", s3);
}
