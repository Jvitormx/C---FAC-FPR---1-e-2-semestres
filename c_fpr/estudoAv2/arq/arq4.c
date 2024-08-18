#include <stdio.h>

int lerArquivo (char nomeArq[]);

int main(void)
{
    //declaração de variáveis
	char nomeArquivo[30];

	//obtendo o nome do arquivo
	printf ("Entre com o nome do arquivo: ");
    scanf("%s", nomeArquivo);

	//chamando a função
	if (lerArquivo (nomeArquivo) == 0)
	{
		printf ("\n\nErro na abertura do arquivo %s.\n", nomeArquivo);
	}
}

//implementação das funções
int lerArquivo (char nomeArq[])
{
	char ch;
	FILE *arquivo;	//passo 1: declarar uma variável do tipo FILE*

	//passo 2: associar a variável FILE* a um arquivo em disco
	arquivo = fopen (nomeArq, "r");    //w - write   r - read   a - append

	//if (arquivo == NULL)
	if (!arquivo)
	{
		return 0;
	}
	else
	{
		//passo 3: manipulação o arquivo
		while (fscanf (arquivo, "%c", &ch) != EOF)	//f - file
		{
			printf ("%c", ch);
		}

		//passo 4: fechando o arquivo
		fclose (arquivo);

		return 1;
	}
}
