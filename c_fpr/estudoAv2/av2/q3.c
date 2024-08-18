#include <stdio.h>

int elementosComuns(char nome1[], char nome2[]);

int main(void)
{
    printf("%d\n", elementosComuns("testeA.txt", "testeB.txt"));
}

int elementosComuns(char nome1[], char nome2[])
{
    FILE *arq1, *arq2;
    int valor1, valor2, cont=0;

    arq1=fopen(nome1,"r");
    arq2=fopen(nome2,"r");

    if(!arq1 && !arq2)
    {
        return 0;
    }else{
        while(fscanf(arq1, "%d", &valor1)!=EOF)
        {
            while(fscanf(arq2, "%d", &valor2)!=EOF)
            {
                if(valor1==valor2)
                {
                    cont++;
                    break;
                }
            }
        }
    }

    fclose(arq1);
    fclose(arq2);

    return cont;
}
