#include <stdio.h>

int main(void)
{
    int i,j;
    for(i=1;i<=9;i++){
        for(j=0;j<=10;j++){
            printf("%dx%d=%d\n", i,j,i*j);
        }
        printf("\n");
    }
}