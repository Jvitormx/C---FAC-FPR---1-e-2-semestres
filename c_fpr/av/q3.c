#include <stdio.h>
#include <string.h>

/*Desenvolver uma função que, dada uma string s, crie uma substring
	que inicie na posição p de s  e contenha n caracteres.

	Observações:
		i) se p e/ou n forem inválidos, a substring será vazia;
		ii) se s não possuir n caracteres além de p, a substring a ser
		    criada começará em p e terminará no final de s.*/

void sub(char s[], int p, int n);

int main(void)
{
    char s[20];
    int p, n;

    printf("s: ");
    scanf(" %s", s);

    printf("p: ");
    scanf(" %d", &p);

    printf("n: ");
    scanf(" %d", &n);

    sub(s,p,n);

}

void sub(char s[], int p, int n)
{
    char su[n];
    int i, aux=0;

    if(p>strlen(s) || p<0)
    {
        for(i=0;i<strlen(su)-1;i++)
        {
            su[i]='0';
        }
    }else{
        for(i=p;i<n;i++)
        {
            if(s[p]=='\n')
            {
                break;
            }
            su[aux]=s[p];
        }
    }

    printf("%s\n", su);
}
