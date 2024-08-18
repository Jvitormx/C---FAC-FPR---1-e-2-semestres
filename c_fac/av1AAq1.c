#include <stdio.h>

int main(void)
{
    int dia1,mes1,ano1,totalDias1;
    int dia2,mes2,ano2,totalDias2;
    int diferenca;

    scanf("%d %d %d", &dia1,&mes1,&ano1);
    scanf("%d %d %d", &dia2,&mes2,&ano2);

    totalDias1=(ano1*360)+(mes1*30)+dia1;
    totalDias2=(ano2*360)+(mes2*30)+dia2;

    diferenca=totalDias2-totalDias1;
    printf("%d", diferenca);
}