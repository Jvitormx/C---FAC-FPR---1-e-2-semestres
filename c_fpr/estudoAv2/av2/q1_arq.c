#include <stdio.h>

int num(char nome[], int numero);

int main(void)
{
    char nome[30];
    int valor;

    printf("nome: ");
    scanf("%s", nome);
    printf("num: ");
    scanf("%d", &valor);

    printf("%d\n", num(nome, valor));
}

int num(char nome[], int numero)
{
    FILE *arq;
    int valor, cont=0;
    arq=fopen(nome, "r");

    if(!arq)
    {
        printf("erro!");
        return 0;
    }else{
        while(fscanf(arq, "%d", &valor)!=EOF)
        {
            if(valor==numero)
            {
                cont++;
            }
        }
    }

    fclose(arq);
    return cont;
}
