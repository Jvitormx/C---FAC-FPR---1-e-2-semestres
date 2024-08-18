#include<stdio.h>

int main()
{
    int num, sum=0;
    scanf("%d", &num);

    //Write your code here
    while(num!=0){
        sum+=num%10;
        num/=10;
    }

    printf("%d", sum);
    return 0;
}