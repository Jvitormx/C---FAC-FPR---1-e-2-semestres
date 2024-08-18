#include <stdio.h>

int main(void)
{
    int num,y;
    printf("num: ");
    scanf("%d", &num);
    printf("y: ");
    scanf("%d", &y);
    for(int i=0;i<num;i++){
        if(i%y==0){
            printf("%d\n", i);
        }
    }
}