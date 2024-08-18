#include <stdio.h>

void func(int a, int b, int *quantidade, int *maior);

int main(void)
{
    int a,b,quant,maior;

    printf("a: ");
    scanf("%d", &a);

    printf("b: ");
    scanf("%d", &b);

    func(a,b,&quant,&maior);

    printf("%d %d ", quant, maior);
}

void func(int a, int b, int *quantidade, int *maior)
{
    *quantidade=0;

    int pot=1;
    while(pot<=b){

        if(pot>=a){
            *quantidade++;
            *maior=pot;
        }
        pot*=2;
    }
}
