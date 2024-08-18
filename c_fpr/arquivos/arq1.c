#include <stdio.h>

int criarArq(char nome[]);

int main(void)
{
    char nome[20];

    printf("nome: ");
    scanf("%s", nome);

    if(criarArq(nome)==1)
    {
        printf("criado\n");
    }else{
        printf("erro\n");
    }
}

int criarArq(char nome[])
{
    FILE *arquivo;
    int i;

    arquivo=fopen(nome, "a");

    if(!arquivo)
    {
        return 0;
    }else{
        for(i=0;i<10;i++)
        {
            fprintf(arquivo, "%d", i+1);
        }

        fclose(arquivo);
    }

    return 1;
}
