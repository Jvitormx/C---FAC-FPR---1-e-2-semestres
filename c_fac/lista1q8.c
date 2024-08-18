#include <stdio.h>

int main() {
    // Variáveis para armazenar os dados do hóspede
    char nome[100];
    char tipoApartamento;
    int numDiarias;
    double valorConsumoInterno;

    // Variáveis para armazenar os valores das diárias
    double valorDiaria;

    // Tabela de valores das diárias
    // A: R$ 350,00
    // B: R$ 275,00
    // C: R$ 200,00
    // D: R$ 150,00
    printf("Digite o nome do hóspede: ");
    scanf("%s", nome);
    printf("Digite o tipo do apartamento (A, B, C ou D): ");
    scanf(" %c", &tipoApartamento);
    printf("Digite o número de diárias utilizadas pelo hóspede: ");
    scanf("%d", &numDiarias);
    printf("Digite o valor do consumo interno do hóspede: R$ ");
    scanf("%lf", &valorConsumoInterno);

    // Determinar o valor da diária com base no tipo de apartamento
    switch (tipoApartamento) {
        case 'A':
            valorDiaria = 350.00;
            break;
        case 'B':
            valorDiaria = 275.00;
            break;
        case 'C':
            valorDiaria = 200.00;
            break;
        case 'D':
            valorDiaria = 150.00;
            break;
        default:
            printf("Tipo de apartamento inválido.\n");
            return 1;
    }

    // Calcular subtotal
    double subtotal = (valorDiaria * numDiarias) + valorConsumoInterno;

    // Calcular taxa de serviço (10% do subtotal)
    double taxaServico = 0.10 * subtotal;

    // Calcular o total geral
    double totalGeral = subtotal + taxaServico;

    // Exibir a conta final
    printf("\nConta para o hóspede: %s\n", nome);
    printf("Tipo de Apartamento: %c\n", tipoApartamento);
    printf("Valor total das diárias: R$ %.2lf\n", valorDiaria * numDiarias);
    printf("Valor do consumo interno: R$ %.2lf\n", valorConsumoInterno);
    printf("Subtotal: R$ %.2lf\n", subtotal);
    printf("Valor da taxa de serviço: R$ %.2lf\n", taxaServico);
    printf("Total Geral: R$ %.2lf\n", totalGeral);

    return 0;
}