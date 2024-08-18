#include <stdio.h>

int lerArq(char nome[]);

int main(void)
{
    char nome[20];

    printf("nome: ");
    scanf("%s", nome);

    if(lerArq(nome)==1)
    {
        printf("criado\n");
    }else{
        printf("erro\n");
    }
}

int lerArq(char nome[])
{
    char c;
    FILE *arquivo;

    arquivo=fopen(nome, "r");

    if(!arquivo)
    {
        return 0;
    }else{
        while(fscanf(arquivo, "%c", &c)!=EOF)
        {
            printf("%c", c);
        }

        fclose(arquivo);
    }

    return 1;
}
