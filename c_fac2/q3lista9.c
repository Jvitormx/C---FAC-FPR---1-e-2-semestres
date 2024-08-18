#include <stdio.h>

void fibb(int num);

int main(void)
{
    int n;
    scanf("%d", &n);

    fibb(n);
}

void fibb(int num)
{
    int i, fib=2, outro;
    if(num==1){
           printf("%d", 1);
    }
    if(num==2){
        printf("%d", 1);
    }else{
        for(i=2;i<num;i++){
            outro=fib-1;
            fib+=outro;
            printf("%d", fib);
    }
    }
}
