#include <stdio.h>
#define QUANT 10
int main(void)
{
    	//declaração de variáveis
	int i, numFilhos, somaFilhos = 0, cont1000 = 0;
	float salario, somaSalario = 0, mediaSalarial, mediaFilhos,
	      maiorSalario = 0, perc1000;

	//lendo os dados das pessoas que participaram da pesquisa
	for (i=1;i<=QUANT;i++)
	{
		printf ("Salario: ");
		scanf ("%f", &salario);

		printf ("Numero de filhos: ");
		scanf ("%d", &numFilhos);

		//somando todos os salários
		somaSalario += salario;

		//somando os números de filhos
		somaFilhos += numFilhos;

		//verificando se o salário lido é o maior de todos
		if (salario > maiorSalario)
		{
			maiorSalario = salario;
		}

		//verificando se o salário lido é menor ou igual a R$ 1.000,00
		if (salario <= 1000)
		{
			cont1000++;
		}
	}

	//calculando as médias
	mediaSalarial = somaSalario/QUANT;
	mediaFilhos = (float)somaFilhos/QUANT;

	//calculando o percentual de pessoas que recebem até R$ 1.000,00
	perc1000 = ((float)cont1000/QUANT)*100;

	//exibindo os resultados
	printf ("\nMedia salarial da populacao: R$ %.2f\n", mediaSalarial);
	printf ("Media do numero de filhos da populacao: %.1f\n", mediaFilhos);
	printf ("Maior salario: R$ %.2f\n", maiorSalario);
	printf ("%.1f %% recebem ate' R$ 1.000,00\n", perc1000);
}