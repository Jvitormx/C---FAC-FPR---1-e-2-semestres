#include <stdio.h>

int num(int x, int a[]);

int main(void)
{
    int x, array[]={1,2,3,3,4};
    scanf("%d", &x);
    printf("%d\n", num(x, array));
    printf("%lu", sizeof(array));
}

int num(int x, int a[])
{
    int i, cont=0;
    for(i=0;i<8;i++){
        if(a[i]==x){
            cont++;
        }
    }
    return cont;
}
