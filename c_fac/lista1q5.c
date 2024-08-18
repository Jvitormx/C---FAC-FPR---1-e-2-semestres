#include <stdio.h>

int main(void)
{
    int num, count, numbers[]={100,50,20,10,5,2,1};
    printf("num: ");
    scanf("%d", &num);
    int def_number=num;
    for(int i=0;i<7;i++){
        count=num/numbers[i];
        printf("there are %d notes of %d in the number %d\n", count, numbers[i], def_number);
        num=num%numbers[i];
    }

}