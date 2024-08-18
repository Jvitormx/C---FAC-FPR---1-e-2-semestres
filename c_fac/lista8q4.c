#include <stdio.h>

int main(void)
{
    int num1,num2,primos,menor,i;

    scanf("%d %d", &num1,&num2);
    if(num1>num2){
        menor=num1;
    }else{
        menor=num2;
    }

    primos=1;

    for(i=2;i<=menor;i++){
        if(num1%i==0 && num2%i==0){
            primos=0;
        }
    }
}