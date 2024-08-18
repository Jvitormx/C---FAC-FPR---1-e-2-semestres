#include <stdio.h>

int func(float array[]);

int main(void)
{
    float vec[]={1,2,3,22,5,6};
    int resp;

    resp=func(vec);
    if(resp==1){
        printf("Tudo errado ");
    }else{
        printf("Tudo certo ");
    }

}

int func(float array[])
{
    int i,j;
    for(i=0,j=1;j<6;i++,j++){
        if(array[i]>array[j]){
            return 1;
        }
    }

    return 0;
}
