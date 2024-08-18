#include <stdio.h>

int main(void)
{
    int n,x,pot=1;
    scanf("%d",&n);
    scanf("%d",&x);

    for(int i=0;i<x;i++){
        pot*=3;
    }
    printf("%d", pot);
}