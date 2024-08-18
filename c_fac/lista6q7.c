#include <stdio.h>
#include <float.h>

int main(void)
{
    float num, soma=0, somaUltimos=0, menorNum=FLOAT_MAX;
    for(int i=1;i<=150;i++)
    {
        scanf("%f", &num);
        if(i<=50){
            soma+=num;
        }
        if(i<=100 && i>=51){
            if(num<menorNum){
                menorNum=num;
            }
        }else{
            somaUltimos+=num;
        }
    }
    printf("%d\n", soma);
    printf("%d\n", somaUltimos);
    printf("%d\n", menorNum);
    printf("%.1f\n", somaUltimos/5.0);
}