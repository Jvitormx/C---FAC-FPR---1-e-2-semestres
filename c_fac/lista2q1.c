#include <stdio.h>

int main(void)
{
    float peso=88.0,altura=1.70;
    int imc = peso/(altura*altura);

    if(imc<18.5){
        printf("aaa");
    }else if(imc<25.0){
        printf("bbb");
    }else if(imc<30.0){
        printf("ccc");
    }else if(imc<35.0){
        printf("ddd");
    }else if(imc<40.0){
        printf("ddd");
    }else{
        printf("nnnn");
    }
}