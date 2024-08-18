#include <stdio.h>
#define TAM 5

/*Considere a existência de um vetor de structs com
quant posições, onde cada uma destas armazena os
seguintes dados sobre os funcionários de uma
empresa: matricula (int), nome (string), gênero (char) e
salário (float). Pede-se uma função que, dado um
gênero, desloque todos os funcionários deste gênero
para o início do vetor (e, consequentemente, os
funcionários do outro gênero ficarão ao final do
conjunto).*/

typedef struct{
    int mat;
    char nome[20];
    char gen;
    float sal;
}user;

void inputFunc(user func[]);

void gen(user func[], char gen);

void printFunc(user func[]);

int main(void)
{
    user func[TAM];
    char gen;

    inputFunc(func);

    printf("gen: ");
    scanf("%c", &gen);

    gen(func, gen);

    printFunc(func);
}

void gen(user func[], char gen)
{
    
}

void printFunc(user func[])
{
    int i;
    for(i=0;i<TAM;i++)
    {
    printf("mat: %d ", func[i].mat);
    printf("gen: %c ", func[i].gen);
    printf("nome: %s ", func[i].nome);
    printf("salario: %.2f\n", func[i].sal);
    }
}

void inputFunc(user func[])
{
    int i, mat;
    char gen, nome[20];
    float sal;

    for(i=0;i<TAM;i++)
    {
    printf("mat: ");
    scanf("%d", &mat);
    printf("gen: ");
    scanf("%c", &gen);
    printf("nome: ");
    scanf(" %s", nome);
    printf("salario: ");
    scanf("%f", &sal);

    func[i].mat=mat;
    func[i].gen=gen;
    strcpy(func[i].nome, nome);
    func[i].sal=sal;
    }

}
