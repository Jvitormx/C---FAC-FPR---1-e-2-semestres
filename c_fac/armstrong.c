#include <stdio.h>

int main(void)
{
    int i,num,aux1,aux2,alg,cont=0,pot=1,sum=0,auxSum;

    scanf("%d", &num);
    aux1=num;
    aux2=num;

    while(aux1!=0){
        cont++;
        aux1/=10;
    }

    while(num!=0){
        alg=num%10;
        for(i=1;i<=cont;i++){
            pot*=alg;
        }
        auxSum=pot;
        pot=1;
    sum+=auxSum;
        num/=10;
    }

    printf("%d\n", sum);
    if(aux2==sum){
        printf("Is an Armstrong number\n");
    }else{
        printf("It is not an Armstrong number\n");
    }
}