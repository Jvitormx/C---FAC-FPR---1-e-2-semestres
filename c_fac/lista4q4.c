#include <stdio.h>

int main(void)
{
    int i=0,num,count=0,pos,soma=0;
    float media;
    do{
        scanf("%d",&num);
        if(num<0){
            count++;
        }else{
            soma+=num;
        }
        i++;
    }while(i<5);
    pos=5-count;
    media=(float)soma/pos;
    printf("negativos: %d\n", count);
    printf("media dos positivos: %.2f", media);
}