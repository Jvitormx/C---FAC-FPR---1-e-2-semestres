#include <stdio.h>
#include <string.h>

/*Pede-se o desenvolvimento de uma função que, dada uma string representando um número binário (ou seja, contendo
apenas os caracteres 0 e 1), converta-o para a base decimal.
Notas:
 A função solicitada deverá chamar outra função que validará se a string representa um número binário. Se não
consistir em um número binário, o valor -1 deverá ser retornado; caso contrário, o número inteiro decimal
equivalente será retornado;
 Durante a leitura das questões da prova, será apresentado um exemplo que evidencie o processo de transformação
de um número binário em decimal.*/

int bi(char s[]);

int main(void)
{
    char s[10];

    printf("s: ");
    scanf("%s", s);

    printf("%d\n", bi(s));
}

int bi(char s[])
{
    int i, aux=1, aux2;
    for(i=strlen(s)-1, aux2=1;i>=0;i--, aux2*=2)
    {
        if(s[i]=='1')
        {
            aux+=aux2;
        }
    }

    return aux-1;
}
