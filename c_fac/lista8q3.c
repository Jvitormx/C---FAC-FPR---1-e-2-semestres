#include <stdio.h>

int main(void)
{
	//declaração de variáveis
	int n1, n2, num1, num2, alg1, alg2, achou, resposta = 1;

	//obtendo os valores de n1 e n2
	printf ("Entre com dois numeros: ");
	scanf ("%d %d", &n1, &n2);

	//salvando o primeiro números lido, preservando seu valor original
	num1 = n1;

	//repetição externa: decomporá o primeiro número em seus algarismos
	while (num1 > 0)
	{
		//obtendo cada algarismo de 'num1'
		alg1 = num1%10;

		//atualizando 'num1' para que seja possível obter o próximo algarismo
		//na próxima iteração
		num1 = num1/10;     //ou num1 /= 10;

		//armazenando em 'num2' o valor original de 'n2'
		num2 = n2;

		//a variável 'achou' receberá 1 se 'alg1' for encontrado em 'num2'
		achou = 0;

		//repetição interna: decomporá o segundo número em seus algarismos
		//e os comparará com 'alg1'
		while (num2 > 0)
		{
			//obtendo cada algarismo de 'num2'
			alg2 = num2%10;

			//atualizando 'num2' para que seja possível obter o próximo
			//algarismo na próxima iteração
			num2 = num2/10;     //ou num2 /= 10;

			//comparando os algarismos
			if (alg1 == alg2)
			{
				achou = 1;
			}
		}

		//verificando o valor de 'achou'
		if (achou == 0)
		{
			//um algarismo de 'num1' não foi encontrado em 'num2'.
			//Portanto, não atende ao enunciado.
			resposta = 0;
		}
	}

	//testando o valor de 'resposta'
	if (resposta == 1)
	{
		printf ("\n%d e %d possuem os mesmos algarismos!", n1, n2);
	}
	else
	{
		printf ("\n%d e %d NAO possuem os mesmos algarismos!", n1, n2);
	}
}