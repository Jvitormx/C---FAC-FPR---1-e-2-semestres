#include <stdio.h>

/*Fazer uma função recursiva que, dado um número
inteiro e positivo N, calcule a soma de seus algarismos.*/

int soma(int n);
int soma2(int n, int aux);

int main(void)
{
    int num;
    printf("num: ");
    scanf("%d", &num);

    printf("%d\n", soma(num));
}

int soma(int n)
{
    int aux=0;
    return soma2(n, aux);
}

int soma2(int n, int aux)
{
    if(n!=0)
    {
        aux=n%10;
        n/=10;
        return aux+soma2(n, aux);
    }else{
        return 0;
    }
}
