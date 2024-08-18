#include <stdio.h>

int main(void)
{
    int n, gostou=0, ngostou=0, gostouM=0, ngostouM=0, masc=0, fem=0;
    char gen, opn;
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        printf("genero[M/F]: ");
        fflush (stdin);
        scanf("%c", &gen);

        if(gen=='m'){
            masc++;
            if(opn=='g'){
            gostouM++;
        }else{
            ngostouM++;
        }
        }else{
            if(opn=='g'){
            gostou++;
        }else{
            ngostou++;
        }
            fem++;
        }



        printf("opiniao G/N: ");
        fflush (stdin);
        scanf("%c", &opn);

    }

    printf(" ");
}