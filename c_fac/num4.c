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
    float saldo, saldoM;
    printf("Saldo: ");
    scanf("%f", &saldo);

    if(saldo<1000.00){
        printf("nenhum crédito\n");
    }else if(saldo<1500.00){
        saldoM=((float)20/100)*saldo;
        printf("saldo medio: %.2f", saldoM);
    }else if(saldo<2500.00){
        saldoM=((float)30/100)*saldo;
        printf("saldo medio: %.2f", saldoM);
    }else{
        saldoM=((float)40/100)*saldo;
        printf("saldo medio: %.2f\n", saldoM);
    }

}