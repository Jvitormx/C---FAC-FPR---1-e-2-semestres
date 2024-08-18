/*
	FAETERJ-Rio
	FAC - 2023.2 - 18/10/2023
  João Vitor Marques Xavier

  Questão 3 - Turma B - Manhã
*/

#include <stdio.h>

int main(void)
{
    int num,contZeros=0,maior=0,quantNum=0, somaNum=0, quantPrimeiroZero=0, quantPos=0,quantNeg=0;
    float media;

    do{
      printf("num: ");
      scanf("%d", &num);
      if(num==0){
        contZeros++;
      }else{
        quantNum++;
      }

      if(contZeros==0){
        quantPrimeiroZero++;
        somaNum+=num;
      }else{
          if(num>maior){
          maior=num;
          }
        if(contZeros==2){
               printf("%d",contZeros);
            if(num>0){
              quantPos++;
            }else{
              if(num!=0){
              quantNeg++;
              }
            }
          }
        }
      }while(contZeros!=3);

    printf("Quantidade de valores informados: %d\n", quantNum);
    printf("A média dos números lidos até a primeira vez que o 0 é fornecido: %.1f\n", (float)somaNum/quantPrimeiroZero);
    printf("O maior valor entre a primeira e a segunda ocorrências do número 0: %d\n", maior);
    printf("Quantidade de números negativos após a segunda ocorrência: %d\n", quantNeg);
    printf("Quantidade de números positivos após a segunda ocorrência: %d\n", quantPos);
}