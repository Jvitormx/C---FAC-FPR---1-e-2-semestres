#include <stdio.h>

int main(void)
{
    int n, alg, mult=1, dec=0;
    scanf("%d",&n);
    while(n!=0){
        alg=n%10;
        if(alg!=0 && alg!=1){
            printf("ERRO\n");
            break;
        }
        dec+=alg*mult;
        n/=10;
        mult*=2;
    }

    printf("%d\n",dec);
}