#include <stdio.h>

int quantChar(char nome[]);

int main(void)
{
    char nome[10];

    printf("nome: ");
    scanf("%s", nome);

    printf("%d", quantChar(nome));
}

int quantChar(char nome[])
{
    FILE *arquivo=fopen(nome, "r");

    int cont=0;
    char c;

    while(fscanf(arquivo, "%c", &c)!=EOF)
    {
        if(c=='\n')
        {
            cont--;
        }

        cont++;
    }

    return cont;


}
