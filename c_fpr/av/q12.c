#include <stdio.h>
#include <string.h>

#define TAM 3

/*Uma pesquisa foi feita e cada entrevistado informou os
seguintes dados: nome, gênero e idade. Todas as
informações coletadas foram armazenadas sob a forma
de um vetor de structs, cada posição armazenando os
dados de um entrevistado. Pede-se o desenvolvimento
de uma função que, dado um gênero, retorne a posição
do entrevistado que atenda aos seguintes requisitos:


a. Deve ser do gênero especificado como
parâmetro da função;
b. Caso mais de um entrevistado seja do gênero
definido, deverá ser retornada a posição do
entrevistado mais novo daquele gênero;
c. Por último, se houver mais de uma pessoa do
gênero escolhido e com a menor idade, deverá
ser retornada a posição da que possuir o nome
que vier primeiro em uma ordem crescente
alfabética.*/

typedef struct{
    char nome[20];
    char gen;
    int idade;
}TEnt;

void inputEnt(TEnt entrevistados[]);
void printEnt(TEnt entrevistados[]);
int posicao(TEnt entrevistados[], char gen);
int idade(TEnt entrevistados[], char gen);

int main(void)
{
    TEnt entrevistados[TAM];

    char gen;

    inputEnt(entrevistados);
    printEnt(entrevistados);

    printf("genero: ");
    scanf(" %c", &gen);

    printf("%d\n", posicao(entrevistados, gen));
}

int idade(TEnt entrevistados[], char gen)
{
    int i, maisNovo;

    for(i=0;i<TAM;i++)
    {
        if(entrevistados[i].gen==gen)
        {
            maisNovo=entrevistados[i].idade;
            return maisNovo;
        }
    }

    return 0;
}

int posicao(TEnt entrevistados[], char gen)
{
    int i, cont=0, aux, aux2, maisNovo;

    maisNovo=idade(entrevistados, gen);

    for(i=0;i<TAM;i++)
    {
        if(entrevistados[i].gen==gen)
        {
            aux=i;
            cont++;
            if(cont>1)
            {
                if(entrevistados[i].idade<maisNovo)
                {
                    aux2=i;
                }else{
                    aux2=i-1;
                }
            }
        }
    }

    if(cont>1)
    {
        return aux2;
    }else{
        if(cont==0)
        {
            return -1;
        }
    }

    return aux;
}

void printEnt(TEnt entrevistados[])
{
    int i;
    for(i=0;i<TAM;i++)
    {
        printf("%s |", entrevistados[i].nome);
        printf("%c |", entrevistados[i].gen);
        printf("%d ", entrevistados[i].idade);
        printf("\n");
    }
}

void inputEnt(TEnt entrevistados[])
{
    char nome[20], gen;
    int i, idade;

    for(i=0;i<TAM;i++)
    {
    printf("nome: ");
    scanf(" %s", nome);

    printf("gen: ");
    scanf(" %c", &gen);

    printf("idade: ");
    scanf("%d", &idade);

    strcpy(entrevistados[i].nome, nome);
    entrevistados[i].gen=gen;
    entrevistados[i].idade=idade;
    }
}
