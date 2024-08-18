#include <stdio.h>

int main(void)
{
    float saldo, saque, totalSaques=0, totalDepositos=0, deposito;
    char menu;

    do{
    printf("Saldo: ");
    scanf("%f", &saldo);
    }while(saldo<=0);

    do{
        printf("Saque (S)|Depósito (D)|Fim (F)");
        scanf("%c", &menu);
        if(menu=='S'){
            printf("Saque: ");
            scanf("%f", &saque);
            if((saldo-saque)<0){
                printf("ERROR");
            }else{
                saldo-=saque;
                totalSaques+=saque;
            }
        }
        if(menu=='D'){
            printf("Valor a ser depositado: ");
            scanf("%f", &deposito);
            if(deposito<=0){
                printf("ERRO");
            }else{
                saldo+=deposito;
                totalDepositos+=deposito;
            }
        }
    }while(menu!='F');

    printf("Valor de saque: %.2f\n", totalSaques);
    printf("Valor de deposito: %.2f\n", totalDepositos);
    printf("Saldo: %.2f\n", saldo);
}