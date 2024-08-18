#include <stdio.h>

int main(void)
{
    int i, num, bi, pot=2, cont=10, dec=0;

    printf("num: ");
    scanf("%d", &num);
    i=num;

    while(i<0){
        i=num/cont;
        bi=i%cont;
        dec+=bi*pot;
        pot*=2;
        cont*=10;
    }

    printf("%d", dec);
}