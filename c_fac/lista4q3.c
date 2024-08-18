#include <stdio.h>

int main(void)
{
    int num,anos,rendimento;
    float total;
    printf("num: ");
    scanf("%d",&num);
    printf("anos: ");
    scanf("%d",&anos);
    printf("rendimento: ");
    scanf("%d",&rendimento);

    for(int i=1;i<=anos*12;i++){
        num+=num*(rendimento/100.0);
    }
    printf("%.2f\n", (float)num);
}