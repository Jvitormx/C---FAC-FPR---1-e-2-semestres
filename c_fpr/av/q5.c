#include <stdio.h>
#include <string.h>

/*Dadas duas strings s1 e s2, implementar uma função
que verifique se s1 é uma substring de s2 (retornando 1
caso seja ou 0, se não for).*/

int verificar(char s1[], char s2[]);

int main(void)
{
	char s1[20], s2[20];

	printf("s1: ");
	scanf(" %s", s1);

	printf("s2: ");
	scanf(" %s", s2);

	printf("%d\n", verificar(s1,s2));
}

int verificar(char s1[], char s2[])
{
	int i, j, aux=0, tam1=strlen(s1), tam2=strlen(s2), cont=0;

	for(i=aux;i<tam2;)
	{
		for(j=0;j<tam1;j++)
		{
			if(s1[j]==s2[aux])
			{
				cont++;
			}
			aux++;
		}
		if(cont==tam1)
		{
			return 1;
		}else{
			cont=0;
		}
	}

	return 0;
}
