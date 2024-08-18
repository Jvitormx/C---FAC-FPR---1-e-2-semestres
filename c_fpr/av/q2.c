#include <stdio.h>
#include <string.h>

int pal(char s[]);
int pal2(char s[], int aux1, int aux2);

int main(void)
{
    char s[10];

    printf("s: ");
    scanf("%s", s);

    printf("%d\n", pal(s));
}

int pal2(char s[], int aux1, int aux2)
{
    if(aux1<aux2)
    {
        if(s[aux1]!=s[aux2])
        {
            return 0;
        }
        aux1++;
        aux2--;

        pal2(s, aux1, aux2);


    }
    return 1;
}

int pal(char s[])
{
    int aux1=0, aux2=strlen(s)-1;

    if(aux1<aux2)
    {
        if(s[aux1]!=s[aux2])
        {
            return 0;
        }
        aux1++;
        aux2--;

        pal2(s, aux1, aux2);


    }
    return 1;
}
