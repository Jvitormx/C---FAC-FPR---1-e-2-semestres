#include <stdio.h>

/*
Escrever um algoritmo que, dada uma quantia
em reais, calcule o menor número possível de
notas/moedas (100, 50, 20, 10, 5, 2 e 1) em que
o valor pode ser decomposto.
*/

int main(void)
{
    float quantia;
    int new_quantia;

    printf("Quantia: ");
    scanf("%f", &quantia);


    if(quantia>100.00){
       new_quantia=(int)quantia/100;
       printf("%.d\n", new_quantia);
    }else if(quantia>50.00){
       new_quantia=(int)quantia/50;
       printf("%.d\n", new_quantia);
    }

}