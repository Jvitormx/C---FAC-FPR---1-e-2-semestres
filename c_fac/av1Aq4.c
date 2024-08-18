#include <stdio.h>

int main(void)
{
    int num,cont=0,temp=0;

    scanf("%d", &temp);
    cont++;

    do{
        scanf("%d",&num);
        if(num==temp){
            cont++;
        }else{
            printf("%d - %d vezes\n", temp, cont);
            cont=1;
        }
        temp=num;

    }while(num!=0);
}