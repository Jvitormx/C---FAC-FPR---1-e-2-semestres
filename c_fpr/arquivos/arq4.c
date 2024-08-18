#include <stdio.h>

int copiar(char nome[], char nome2[]);

int main(void)
{
    char nome[20], nome2[20];

    printf("nome: ");
    scanf("%s", nome);

    printf("nome2: ");
    scanf("%s", nome2);

    if(copiar(nome, nome2)==1)
    {
        printf("copiado\n");
    }else{
        printf("erro\n");
    }
}

int copiar(char nome[], char nome2[])
{
    FILE *arq1, *arq2;

    char ch;

    arq1=fopen(nome, "r");
    arq2=fopen(nome2, "w");

    if(!arq1 || !arq2)
    {
        fclose(arq1);
        fclose(arq2);

        return 0;
    }else{
        while(fscanf(arq1, "%c", &ch)!=EOF)
        {
            fprintf(arq2, "%c", ch);
        }

        fclose(arq1);
        fclose(arq2);
    }

    return 1;
}
