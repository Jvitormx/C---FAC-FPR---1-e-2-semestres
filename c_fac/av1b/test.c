#include <stdio.h>

int main(void)
{
    int i,n=4;

    for(i=1;i<=n;i++){
        printf("%d", i);
    }
printf("\n\n");
    i=1;
    while(i<=n){
        printf("%d", i);
        i++;
    }
printf("\n\n");
    i=1;
    do{
        printf("%d", i);
        i++;
    }while(i<=n);


}