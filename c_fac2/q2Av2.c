#include <stdio.h>

int func(int n, int *maior, int *menor);

int main(void)
{
    int n, maior, menor;

    printf("n: ");
    scanf("%d", &n);

    if(func(n, &maior, &menor)==1){
        printf("Maior: %d || Menor: %d\n", maior, menor);
    }else{
        printf("O número é negativo\n");
    }
}

int func(int n, int *maior, int *menor)
{
    *maior=-9999;
    *menor=9999;

    int alg, aux;
    if(n>0){
        while(n!=0){
            alg=n%10;
            if(alg>*maior){
                *maior=alg;
        }
            if(alg<*menor){
                *menor=alg;
            }
        n/=10;
    }
    return 1;
    }else{
        return 0;
    }
}
