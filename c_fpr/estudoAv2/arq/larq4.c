#include <stdio.h>

int verificarOrd(char nome[]);

int main(void)
{
    char nome[30];

    printf("nome: ");
    scanf("%s", nome);

    if(verificarOrd(nome)==1)
    {
        printf("estão ordenados");
    }else{
        printf("não estão ordenados");
    }
}

int verificarOrd(char nome[])
{
    FILE *arq;
    int num, num_anterior=-9999;

    arq=fopen(nome, "r");

    if(!arq)
    {
        return 0;
    }else{
        while(fscanf(arq,"%d",&num)!=EOF)
        {
            if(num<num_anterior)
            {
                fclose(arq);
                return 0;
            }
            num_anterior=num;
        }

        fclose(arq);
        return 1;
    }
}
