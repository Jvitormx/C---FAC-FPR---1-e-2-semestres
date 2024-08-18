/*
	FAETERJ-Rio
	FAC - 2023.2 - 18/10/2023
  João Vitor Marques Xavier

  Questão 2 - Turma B - Manhã
*/

#include <stdio.h>

int main(void)
{
    int num,alg,aux,verifica=0;
    printf("Num: ");
    scanf("%d",&num);

    while(num!=0){
      alg=num%10;
      num/=10;
      aux=num%10;
      if(alg<aux){
        verifica=1;
      }
      }

      if(verifica==1){
        printf("Os algarismos não estão ordenados.\n");
      }else{
        printf("Os algarismos estão ordenados.\n");
      }
}