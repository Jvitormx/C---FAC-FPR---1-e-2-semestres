#include <stdio.h>

/*
O custo ao consumidor de um carro novo é a
soma do custo de fábrica com a porcentagem
do distribuidor e dos impostos (aplicados ao
custo de fábrica). Desenvolver um algoritmo
que calcule o custo ao consumidor de
determinado carro.
*/

int main(void)
{
    float custoF, precoFinal;
    int porD, porI;

    printf("custo de fabrica: ");
    scanf("%f", &custoF);
    printf("Porcentagem do distribuidor: ");
    scanf("%d", &porD);
    printf("Porcentagem dos impostos: ");
    scanf("%d", &porI);

    precoFinal=custoF+(((float)porD/100)*custoF)+(((float)porI/100)*custoF);
    printf("%.2f", precoFinal);




}