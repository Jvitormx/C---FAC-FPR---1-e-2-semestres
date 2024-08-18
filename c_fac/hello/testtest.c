#include <stdio.h>

int main(void)
{
    /*
      int i,j,k;
    for(i=1;i<=4;i++){
        for(j=1;j<=4-i+1;j++){
        printf("#");
        }
        for(k=1;k<=i;k++){
        printf("*");
        }
        printf("\n");

        Dados três números inteiros a, b e c, implementar um programa que exiba
	os números do intervalo definido por a e b (sempre começando em a e
	terminando em b), com exceção daqueles que sejam múltiplos de c.

    }
    */

   int i,a,b,c;
   scanf("%d %d",&a,&b);
   scanf("%d",&c);

   if(a<=b){
    for(i=a;i<=b;i++){
        if(i%c!=0){
            printf("%d",i);
    }
   }
   }else{
    for(i=a;i>=b;i--){
        if(i%c!=0){
            printf("%d",i);
    }
   }
   }
}