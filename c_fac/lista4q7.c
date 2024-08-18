#include <stdio.h>

/*

Faça um programa que leia um
número inteiro positivo N e exiba todos os
múltiplos de Y inferiores a N, onde N e Y são
fornecidos pelo usuário.
/*
	FAETERJ-Rio
	FAC - Turma A
	Data: 11/05/2023

	Lista de Exercícios V

	QUESTÃO 08:
	Fazer um programa que auxilie o orgão regulador no cálculo do total
	de recursos arrecadados com a aplicação de multas de trânsito.

	O programa deve ler as seguintes informações para cada motorista:
 	- O número da carteira de motorista;
 	- Número de multas;
 	- Valor de cada uma das multas.

	Deve ser exibido o valor da dívida de cada motorista e ao final
	da leitura o total de recursos arrecadados (somatório de todas as
	multas). O programa também deverá apresentar o número da carteira
	do motorista que obteve o maior número de multas.
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	char opcao;
	int i, cnh, maiorCNH, numMultas, maiorNumeroMultas = 0;
	float valor, dividaMotorista, totalArrecadado = 0;

	do
	{
		//lendo os dados de cada motorista
		printf ("CNH: ");
		scanf ("%d", &cnh);

		printf ("Total de multas do motorista: ");
		scanf ("%d", &numMultas);

		//verificando se é o maior número de multas
		if (numMultas > maiorNumeroMultas)
		{
			maiorNumeroMultas = numMultas;
			maiorCNH = cnh;
		}

		//lendo o valor de cada multa do motorista
		dividaMotorista = 0;
		for (i=1;i<=numMultas;i++)
		{
			printf ("Valor da %da. multa: ", i);
			scanf ("%f", &valor);

			//atualizando o valor da dívida do motorista
			dividaMotorista += valor;
		}

		//atualizando o total arrecadado com as multas
		totalArrecadado += dividaMotorista;

		//exibindo a dívida do motorista
		printf ("\nDivida do motorista de cnh %d: R$ %.2f\n", cnh, dividaMotorista);

		//verificando se o usuário deseja continuar
		printf ("\n\nDeseja continuar [S/N]? ");
		fflush (stdin);
		scanf ("%c", &opcao);
		opcao = toupper (opcao);
	}
	while (opcao == 'S');

	//exibindo o total arrecadado com as multas
	printf ("\nTotal arrecadado: R$ %.2f\n", totalArrecadado);

	//exibindo a cnh que obteve o maior número de multas
	printf ("\nCNH com maior numero de multas: %d (%d multas)\n", maiorCNH, maiorNumeroMultas);
}
*/


int main(void)
{
    int i,n,y;
    scanf("%d",&n);
    scanf("%d",&y);

    for(i=1;i<n;i++){
        if(i%y==0){
            printf("%d", i);
        }
    }
}