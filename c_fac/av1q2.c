#include <stdio.h>

/*Desenvolver um programa que, dado um número
inteiro N, exiba todas as combinações possíveis com 3
valores, todos no intervalo de 1 a N, de forma que cada
elemento da combinação seja inferior ou igual ao
seguinte, conforme ilustrado no exemplo abaixo:

N = 3
Combinações:
1 1 1
1 1 2
1 1 3
1 2 2
1 2 3
1 3 3
2 2 2
2 2 3
2 3 3
3 3 3*/

int main(void)
{
    int N;
    printf("Digite o valor de N: ");
    scanf("%d", &N);

    printf("Combinações:\n");
    for (int i = 1; i <= N; i++) {
        for (int j = i; j <= N; j++) {
            for (int k = j; k <= N; k++) {
                printf("%d %d %d\n", i, j, k);
            }
        }
    }

    return 0;

}