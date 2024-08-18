#include <stdio.h>
#include <limits.h>

int main(void)
{
    int num, maiorPar=INT_MIN, countPar=0, somaPar=0;
    float mediaPar;

    for(int i=1;i<10;i++){
        scanf("%d",&num);
        if(i%2==0){
            if(num>maiorPar){
                maiorPar=num;
            }
        }
       if(num%2==0){
        somaPar+=num;
        countPar++;
        }
    }
    mediaPar=(float)somaPar/countPar;
    printf("%d\n", maiorPar);
    printf("%.2f\n", mediaPar);

}