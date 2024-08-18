#include <stdio.h>

int criarArq(char nome[], int in, int s);

int main(void)
{
    int inf, sup;
    char nome[20];

    printf("nome: ");
    scanf("%s", nome);

    printf("inf: ");
    scanf("%d", &inf);

    printf("sup: ");
    scanf("%d", &sup);

    if(criarArq(nome, inf, sup)==1)
    {
        printf("criado\n");
    }else{
        printf("erro\n");
    }
}

int criarArq(char nome[], int in, int s)
{
    FILE *arquivo;
    int i;

    arquivo=fopen(nome, "w");

    if(!arquivo)
    {
        return 0;
    }else{
        for(i=in;i<=s;i++)
        {
            fprintf(arquivo, "%d\n", i);
        }

        fclose(arquivo);
    }

    return 1;
}
