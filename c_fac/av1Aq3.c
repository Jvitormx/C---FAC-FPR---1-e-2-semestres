#include <stdio.h>

int main(void)
{
    char menu;
    int  valor=0, operacao;

    do{
        printf("(A) Soma, (B) Subtração; (C) Multiplicação; (D) Divisão; (E) Limpar memória; (F) Sair\n");
        scanf("%c",&menu);

        if(menu=='A'){
            printf("Valor: ");
            scanf("%d", &operacao);
            valor+=operacao;
        }

        if(menu=='B'){
            printf("Valor: ");
            scanf("%d", &operacao);
            valor-=operacao;
        }

         if(menu=='C'){
            printf("Valor: ");
            scanf("%d", &operacao);
            valor*=operacao;
        }

         if(menu=='D'){
            printf("Valor: ");
            scanf("%d", &operacao);
            valor/=operacao;
        }

         if(menu=='E'){
            valor=0;
        }

        if(menu=='F'){
            printf("%d\n", valor);
            menu='Z';
        }
    }while(menu!='Z');
}