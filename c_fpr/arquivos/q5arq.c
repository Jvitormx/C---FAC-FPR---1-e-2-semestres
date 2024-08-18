#include <stdio.h>

/*Faça uma função que, dado um arquivo A
contendo números reais, um por linha, crie um
novo arquivo B contendo os mesmos
elementos de A, porém ordenados
decrescentemente e sem repetição.*/

int arqB(char nome[], char nome2[]);

int main(void)
{
    char nome[20], nome2[20];

    printf("nome: ");
    scanf("%s", nome);

    printf("nome2: ");
    scanf("%s", nome2);

    if(arqB(nome, nome2)==1)
    {
        printf("copiado\n");
    }else{
        printf("erro\n");
    }
}

int arqB(char nome[], char nome2[])
{
    FILE *arq1, *arq2;

    float num, temp;

    arq1=fopen(nome, "r");
    arq2=fopen(nome2, "w");

    if(!arq1 || !arq2)
    {
        fclose(arq1);
        fclose(arq2);

        return 0;
    }else{
        while(fscanf(arq1, "%f", &num)!=EOF)
        {
            if(temp>num)
            fprintf(arq2, "%.2f", num);
        }

        fclose(arq1);
        fclose(arq2);
    }

    return 1;
}
