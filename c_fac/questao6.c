#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    if(n<=18){
        for(int i=1;i<=99;i++){
            if((i/10)+(i%10)==n){
                printf("%d ", i);
            }
        }
    }else{
        printf("\nValor inválido.");
    }
}