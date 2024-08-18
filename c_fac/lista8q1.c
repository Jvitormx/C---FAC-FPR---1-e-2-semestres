#include <stdio.h>

int main(void)
{
    int a,b,c;
    scanf("%d", &a);
      scanf("%d", &b);
        scanf("%d", &c);

    for(int i=a;i<=b;i++){
        if(i%c!=0){
            printf("%d\n", i);
        }
    }
}