#include <stdio.h>
#include <ctype.h>
#include <string.h>

/*Desenvolver uma função recursiva que, dada uma
string s, altere-a de forma que as letras fiquem em
seu início e os demais caracteres ao final, como nos
exemplos a seguir:
Exemplo 1:
Inicialmente: X*7D2SFH1
Ao final: XHFDS27*1

Exemplo 2:
Inicialmente: 1SUG47EFG
Ao final: GSUGFE741
Nota:
Para testar se determinado caracter de uma
string s é uma letra, pode-se utilizar a
seguinte expressão:
if ((toupper(s[i]) >= ‘A’) && (toupper(s[i]) <= ‘Z’))
*/

void alt(char s[]);

void alt2(char s[], int aux1, int aux2, int aux3);

int main(void)
{
    char s[20];

    printf("s: ");
    scanf("%s", s);

    alt(s);
}

void alt2(char s[], int aux1, int aux2, int aux3)
{
    if(aux1<=aux2)
    {
        if(((toupper(s[aux1]) >= 'A') && (toupper(s[aux1]) <= 'Z')))
        {
            aux1++;
            alt2(s, aux1, aux2, aux3);
        }else{
            if(((toupper(s[aux2]) >= 'A') && (toupper(s[aux2]) <= 'Z')))
            {
                aux3=s[aux1];
                s[aux1]=s[aux2];
                s[aux2]=aux3;

                aux1++;
                aux2--;

                alt2(s, aux1, aux2, aux3);
            }else{
                aux1++;
                aux2--;

                alt2(s, aux1, aux2, aux3);
            }

            aux1++;
            alt2(s, aux1, aux2, aux3);
        }
    }
}

void alt(char s[])
{
    int aux1=0, aux2=strlen(s)-1;
    char aux3='\0';
    if(aux1<=aux2)
    {
        if(((toupper(s[aux1]) >= 'A') && (toupper(s[aux1]) <= 'Z')))
        {
            aux1++;
            alt2(s, aux1, aux2, aux3);
        }else{
            if(((toupper(s[aux2]) >= 'A') && (toupper(s[aux2]) <= 'Z')))
            {
                aux3=s[aux1];
                s[aux1]=s[aux2];
                s[aux2]=aux3;

                aux1++;
                aux2--;

                alt2(s, aux1, aux2, aux3);
            }else{
                aux1++;
                aux2--;

                alt2(s, aux1, aux2, aux3);
            }

            aux1++;
            alt2(s, aux1, aux2, aux3);
        }
    }

    printf("%s\n", s);
}
