#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5

float func(float notas[], int pesos[], int tamanho);

int main(void)
{
    float notas[TAM]={4.5,8.0,5.5,10.0,8.0};
    int pesos[TAM]={2,4,6,2,3};

    printf("Média: %.2f\n", func(notas,pesos, TAM));

}

float func(float notas[], int pesos[], int tamanho)
{
    int i,j,k,somaPesos=0;
    float somaNotas=0;

    for(k=0;k<tamanho;k++){
        somaPesos+=pesos[k];
    }
    for(i=0,j=0;i<tamanho;i++,j++){
        somaNotas+=notas[i]*(float)pesos[i];
    }

    return somaNotas/(float)somaPesos;
}
