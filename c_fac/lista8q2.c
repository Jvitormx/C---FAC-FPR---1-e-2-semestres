#include <stdio.h>

int main(void)
{
    int num,i,j,k;
    scanf("%d", &num);

    for(i=num;i>0;i--){
        for(j=num;j>0;j--){
            k=j+1;
            if(j>=i){
                printf("%d", k-=i);
            }else{
                printf("0");
            }
        }
        printf("\n");
    }
}