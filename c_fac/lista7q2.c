#include <stdio.h>

int main(void)
{
    float atual, taxaProducao;
    int ano=0;

    scanf("%d",&atual);
    scanf("%d",&taxaProducao);

    while(atual<atual*2){
        atual+=(atual*taxaProducao/100);
        ano++;
    }

    printf("%d\n", ano);
}