#include <stdio.h>

int main(void)
{
    int i=1, idade, idadeSuperior50=0, alturaSuperior80kg=0;
    float altura, peso, somaAltura=0, maiorPeso=-1000.0;
    char concluir;

    while(i==1){
    printf("idade: ");
    scanf("%d", &idade);

    if(idade>50){
        idadeSuperior50++;
    }

    printf("altura: ");
    scanf("%f", &altura);

    printf("peso: ");
    scanf("%f", &peso);
    if(peso>80.0){
        somaAltura+=altura;
        alturaSuperior80kg++;
    }
    if(altura>1.65 && idade<30){
        if(peso>maiorPeso){
            maiorPeso=peso;
        }
    }


    printf("Concluir? S/N");
    fflush (stdin);
    scanf("%c", &concluir);

    if(concluir=='s'){
        break;
    }
    }
    printf("Quantidade de pessoas: %d\n", idadeSuperior50);
    printf("Média da altura de pessoas com mais de 80kg: %.2f\n", somaAltura/alturaSuperior80kg);
    printf("Maior peso: %2.f\n", maiorPeso);

}