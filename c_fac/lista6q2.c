#include <stdio.h>
#include <limits.h>

int main(void)
{
    int n, var, maior=INT_MIN, menor=INT_MAX;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&var);
        if(var>maior){
            maior=var;
        }
        if(var<menor){
            menor=var;
        }
    }
    printf("maior: %d\n",maior);
    printf("menor: %d\n", menor);
}