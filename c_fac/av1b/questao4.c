/*
	FAETERJ-Rio
	FAC - 2023.2 - 18/10/2023
  João Vitor Marques Xavier

  Questão 4 - Turma B - Manhã
*/

#include <stdio.h>

int main(void)
{
    int acumulador=0, intOperando;
    char num,operacao,operando;

      printf("Valor inicial do acumulador: ");
      fflush(stdin);
      scanf(" %c", &num);

      if(num=='1'){
        acumulador=1;
      }
      if(num=='2'){
        acumulador=2;
      }
      if(num=='3'){
        acumulador=3;
      }
      if(num=='4'){
        acumulador=4;
      }
      if(num=='5'){
        acumulador=5;
      }
      if(num=='6'){
        acumulador=6;
      }
      if(num=='7'){
        acumulador=7;
      }
      if(num=='8'){
        acumulador=8;
      }
      if(num=='9'){
        acumulador=9;
      }

    do{
      printf("Operação[+]|[-]|[*]|[/]: ");
      fflush(stdin);
      scanf(" %c", &operacao);

      if(operacao=='#'){
        break;
      }
      
      printf("operando[1-9]: ");
      fflush(stdin);
      scanf(" %c", &operando);

       if(operando=='1'){
        intOperando=1;
      }
      if(operando=='2'){
        intOperando=2;
      }
      if(operando=='3'){
        intOperando=3;
      }
      if(operando=='4'){
        intOperando=4;
      }
      if(operando=='5'){
        intOperando=5;
      }
      if(operando=='6'){
        intOperando=6;
      }
      if(operando=='7'){
        intOperando=7;
      }
      if(operando=='8'){
        intOperando=8;
      }
      if(operando=='9'){
        intOperando=9;
      }

      if(operacao=='+'){
        acumulador+=intOperando;
      }
      if(operacao=='-'){
        acumulador-=intOperando;
      }
      if(operacao=='*'){
        acumulador*=intOperando;
      }
      if(operacao=='/'){
        acumulador/=intOperando;
      }
    }while(operacao!='#');

    printf("Valor final do acumulador: %d\n", acumulador);
}