#include <stdio.h>

int func(int n);

int main(void)
{
    int n;

    printf("n: ");
    scanf("%d", &n);

    if(func(n)==0){
        printf("não estão ordenados");
    }else{
        printf("estão ordenados");
    }
}

int func(int n)
{
    int alg, aux=0;
    while(n>0){
        alg=n%10;
        if(aux!=0){
            if(alg>aux){
                return 0;
            }
        }
        aux=alg;
        n/=10;
    }

    return 1;
}
