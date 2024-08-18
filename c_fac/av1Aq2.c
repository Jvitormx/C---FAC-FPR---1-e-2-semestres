#include <stdio.h>

int main(void)
{
    int n,x,i,pot=1;
    scanf("%d",&n);
    scanf("%d",&x);

    printf("%d ",pot);
    for(i=1;i<n;i++){
        printf("%d ", pot*=x);
    }
}