#include <stdio.h>

int main(void)
{
    int num,soma=0;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        soma+=i;
    }
    printf("%d", soma);
}