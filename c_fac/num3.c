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
    int gen;
    float altura;
    float pesoIdeal=0.0;

    printf("Genero: ");
    scanf("%d", &gen);
    printf("Altura: ");
    scanf("%f", &altura);

    if(gen==1){
        pesoIdeal=(72.7*altura)-58.0;
    }else if(gen==2){
        pesoIdeal=(62.1*altura)-44.7;
    }else{
        printf("aaa");
    }

    printf("Peso ideal: %.1f", pesoIdeal);




}