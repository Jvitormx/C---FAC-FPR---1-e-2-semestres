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
    int idade;

    printf("Idade: ");
    scanf("%d", &idade);

    if(idade<=4 && idade>0){
        printf("A");
    }else if(idade<=7){
        printf("B");
    }else if(idade<=10){
        printf("C");
    }else if(idade<=13){
        printf("juvenil A");
    }else if(idade<=17){
        printf("juvenil B");
    }else{
        printf("Adulto\n");
    }




}