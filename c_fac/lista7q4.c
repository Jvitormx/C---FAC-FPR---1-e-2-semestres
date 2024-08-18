#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);
    if(num%2==1){
        printf("primo\n");
    }else{
        printf("não é primo\n");
    }
}