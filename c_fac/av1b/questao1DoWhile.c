/*
	FAETERJ-Rio
	FAC - 2023.2 - 18/10/2023
  João Vitor Marques Xavier

  Questão 1 - Turma B - Manhã
*/

#include <stdio.h>

int main(void)
{
   int i,a,b,c;
    printf("a: ");
    scanf("%d",&a);
    printf("b: ");
    scanf("%d",&b);
    printf("c: ");
    scanf("%d",&c);

    i=a;
    do{
        printf("%d ", i);
        i+=c;
    }while(i<=b);
}