#include <stdio.h>

int func(float array[], int num);

int main(void)
{
    float vet[]={7,8,9,10,11,12,13,14,15,16};
    int x;

    printf("x: ");
    scanf("%d", &x);

    printf("%d\n", func(vet, x));


}

int func(float array[], int num)
{
    int i, resp=0;
    for(i=0;i<10;i++){
        if(array[i]==num){
            resp=i;
            break;
        }else{
            if(num>array[i]){
                resp=i+(num-array[i]);
            }
        }
    }

    return resp;
}
