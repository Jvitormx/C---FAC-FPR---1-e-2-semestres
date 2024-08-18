#include <stdio.h>
#include <string.h>

#define TAM 5

/*Considere a existência do tipo TAluno contendo as
seguintes informações sobre um aluno: nome, nota na
AV1, nota na AV2, média e situação.
Dado, portanto, um vetor do tipo TAluno, contendo
quant posições, fazer uma função que verifique se o
vetor está ordenado, conforme os seguintes critérios:
1. As médias devem estar ordenadas de forma
decrescente;
2. No caso de médias iguais, os respectivos nomes
dos alunos devem estar ordenados
crescentemente.
Caso o vetor esteja ordenado conforme regras citadas
acima, a função deverá retornar a constante TRUE;
caso contrário, FALSE.*/

typedef struct{
    char nome[20];
    float av1;
    float av2;
    float media;
    char sit[10];
}TAluno;

void inputAluno(TAluno alunos[]);
void printAluno(TAluno alunos[]);
int ordenado(TAaluno alunos[]);

int main(void)
{
    TAluno alunos[TAM];

    inputAluno(alunos);
    printAluno(alunos);
}

void printAluno(TAluno alunos[])
{
    int i;
    for(i=0;i<TAM;i++)
    {
        printf("%s |", alunos[i].nome);
        printf("%.1f |", alunos[i].av1);
        printf("%.1f |", alunos[i].av2);
        printf("%.1f |", alunos[i].media);
        printf("%s", alunos[i].sit);
        printf("\n");
    }
}

int ordenado(TAluno alunos[])
{
    int i;
    for(i=0;i<TAM-1;i++)
    {
        if(aluno[i].media<alunos[i+1])
        {
            if(aluno[i].nome)
        }
    }
}

void inputAluno(TAluno alunos[])
{
    int i;
    char nome[20], sit[20];
    float av1, av2, media;

    for(i=0;i<TAM;i++)
    {
        printf("nome: ");
        scanf(" %s", nome);

        printf("av1: ");
        scanf(" %f", &av1);

        printf("av2: ");
        scanf(" %f", &av2);

        media=(av1+av2)/2;

        if(media=>6.0)
        {
            strcpy(sit, "aprovado");
        }else{
            if(media=>4.0)
            {
                strcpy(sit, "avf");
            }else{
                strcpy(sit, "reprovado");
            }
        }

        strcpy(alunos[i].nome, nome);
        alunos[i].av1=av1;
        alunos[i].av2=av2;
        alunos[i].media=media;
        strcpy(alunos[i].sit, sit);
    }



}
