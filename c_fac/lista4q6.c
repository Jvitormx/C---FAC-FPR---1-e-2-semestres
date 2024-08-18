#include <stdio.h>

int main(void)
{
    int num,unidade,dezena;
    scanf("%d",&num);

    if(num>18){
        printf("erro");
    }else{
        for(int i=1;i<=99;i++){
            dezena=i/10;
            unidade=i%10;
            if(dezena+unidade==num){
                printf("%d\n", i);
            }
        }
    }
}