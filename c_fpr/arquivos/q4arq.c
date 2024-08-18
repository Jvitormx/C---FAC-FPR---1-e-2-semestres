#include <stdio.h>

/*Desenvolver uma função que, dado um arquivo
texto contendo números, determine se estes
encontram-se ordenados crescentemente.*/

int ordenados(char nome[]);

int main(void)
{
    char nome[10];

    printf("nome: ");
    scanf("%s", nome);

    if(ordenados(nome)==0)
    {
        printf("não existe\n");
    }else{
        if(ordenados(nome)==1)
        {
            printf("erro\n");
        }else{
            printf("foi\n");
        }
    }

    ordenados(nome);
}

int ordenados(char nome[])
{
    FILE *arq=fopen(nome, "r");
    int anterior, seguinte, temp, cont=0, q;

    if(!arq)
    {
        return 0;
        //q=2*2;
    }

    while(fscanf(arq, "%d %d", &anterior, &seguinte)!=EOF)
    {
        if(cont==0)
        {
            if(anterior>seguinte)
            {
                fclose(arq);
                return 1;
                //q=2*2;
            }
            cont++;
            temp=seguinte; //12 23 34
            //printf("///%d > %d\n", anterior, seguinte);
        }else{
            if(temp>anterior)
            {
                fclose(arq);
                return 1;
                //q=2*2;
            }else{
                if(anterior>seguinte)
                {
                    fclose(arq);
                    return 1;
                    //q=2*2;
                }
            }
            //printf("%d > %d\n", temp, anterior);
            //printf("%d > %d\n", anterior, seguinte);
            temp=seguinte; //12 23 34
        }
    }

    return 2;
}
