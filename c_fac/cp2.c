#include <stdio.h>

int main(void)
{
    int n, cube=1;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for(int j=0;j<3;j++){
            cube*=i;
        }
        printf("Number is : %d and cube of the %d is :%d\n", i,i,cube);
        cube=1;
    }
}