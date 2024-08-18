#include <stdio.h>

int main(void)
{
    int x, var, total=0;

    scanf("%d", &x);
    for(int i=0;i<5;i++){
        scanf("%d", &var);
        if(var%x==0){
            total++;
        }
    }
    printf("%d", total);
}