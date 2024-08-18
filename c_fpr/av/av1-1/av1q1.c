#include <stdio.h>
#define L 4
#define C 4

/*Dada uma matriz MLxC, onde L e C são constantes,
desenvolver uma função que verifique se os elementos
da matriz estão ordenados de forma crescente. Para
isto, as seguintes regras devem ser atendidas:
a. Os elementos de cada linha devem estar
ordenados crescentemente (ou seja, cada
elemento será maior ou igual àquele da
mesma linha, porém da coluna anterior – caso
exista);
b. O primeiro elemento de cada linha deve ser
maior ou igual ao último da linha anterior
(caso exista).
Caso a matriz M atenda aos critérios definidos, o valor
1 deverá ser retornado pela função; caso contrário, 0.*/

int verifica(int mat[][])

int main(void)
{
    int mat[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
