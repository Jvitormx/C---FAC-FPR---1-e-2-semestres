#include <stdio.h>

void leituraDados(int *quant, float *maior);

int main(void)
{
    int quant;
    float maior;
    leituraDados(&quant,&maior);
    printf("%d %.2f", quant, maior);
}

void leituraDados(int *quant, float *maior)
{
    float n=1,cont=-1;
    *maior=-9999;
    while(n!=0){
        printf("n: ");
        scanf("%f",&n);
        if(n>*maior){
            *maior=n;
        }
        if(n!=0){
            cont++;
        }
    }

    *quant=cont;
}
