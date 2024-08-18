#include <stdio.h>

int main(void)
{/*
    int n,i,j,k,pot=1;
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(k=1;k!=2*i;k++){
            printf("%d", pot);
        }
        printf("\n");
        pot*=2;
    }
    */

   int n,i,j,k,pot=1;
   scanf("%d", &n);

   i=1;
   while(i<=n){
    j=1;
    while(j<=n-i){
        printf("#");
        j++;
    }
    k=1;
    while(k!=2*i){
         printf("%d", pot);
        k++;
    }
    printf("\n");
    pot*=2;
    i++;
   }
}