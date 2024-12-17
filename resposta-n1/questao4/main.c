#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
    float preco;
    int categoria;

    printf("Preco do ingresso: ");
    scanf("%f", &preco);

    if (preco > 50.00) {
        printf("Valor a pagar (com 20%% de desconto): R$%.2f", preco * 0.8);
    } else if (preco >= 30 && preco <= 50) {
        printf("\nEh estudante? 1 - Sim | 0 - Nao: ");
        scanf("%d", &categoria);
        if (categoria == 1) {
            printf("Valor a pagar (com 15%% de desconto): R$%.2f\n", preco * 0.85);
        } else {
            printf("Valor a pagar (com 5%% de desconto): R$%.2f\n", preco * 0.95);
        }
    } else {
        printf("Valor a pagar (sem desconto): R$%.2f\n", preco);
    }

    system("pause");
    return 0;
}