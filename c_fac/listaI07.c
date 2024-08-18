#include <stdio.h>

int main(void)
{
    int horas;
    float x, resultado=0;

    printf("horas: ");
    scanf("%d", &horas);

    printf("x: ");
    scanf("%f", &x);

    if(horas<=40){
        resultado=x*horas;
    }else{
        resultado=(50.0/100)*(horas-40);
        resultado+=x*horas;
    }

    printf("resultado: %.2f", resultado);
}