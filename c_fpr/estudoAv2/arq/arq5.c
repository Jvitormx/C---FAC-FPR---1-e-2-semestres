#include <stdio.h>

int copiarArq(char nome1[], char nome2[]);

int main(void)
{
    char nome1[30], nome2[30];

    printf("nome1: ");
    scanf("%s", nome1);

    printf("nome2: ");
    scanf("%s", nome2);

    if(copiarArq(nome1, nome2)==1)
    {
        printf("copia realiza");
    }else{
        printf("erro!");
    }
}

int copiarArq(char nome1[], char nome2[])
{
    FILE *arq1, *arq2;

    char ca;

    arq1=fopen(nome1,"r");
    arq2=fopen(nome2,"w");

    if((!arq1)||(!arq2))
    {
        return 0;
    }else{
        while(fscanf(arq1,"%c", &ca)!=EOF)
        {
            fprintf(arq2,"%c", ca);
        }

        fclose(arq1);
        fclose(arq2);

        return 1;
    }
}
