#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("cls");
    
    float peso, frete_total_desconto, frete_unidade, frete_total;
    int tipo_cliente;

    printf("Peso da encomenda em kg: ");
    scanf("%f", &peso);

    printf("Frete por kg: ");
    scanf("%f", &frete_unidade);

    frete_total = peso * frete_unidade;

    if (peso > 30.0) {
        frete_total_desconto = frete_total * 0.85;
        printf("\nValor final do frete (com 15%% de desconto): R$%.2f\n", frete_total_desconto);
    } else if (peso >= 15.0 && peso <= 30.0) {
        printf("Tipo de cliente (1 - VIP || 2 - Comum): ");
        scanf("%d", tipo_cliente);
        if (tipo_cliente == 1) {
            frete_total_desconto = frete_total * 0.9;
            printf("\nValor final do frete (com 10%% de desconto): R$%.2f\n", frete_total_desconto);
        } else {
            frete_total_desconto = frete_total * 0.95;
            printf("\nValor final do frete (com 5%% de desconto): R$%.2f\n", frete_total_desconto);
        }
    } else {
        printf("\nValor final do frete (sem descontos): R$%.2f\n", frete_total);
    }

    system("pause");
    return 0;
}