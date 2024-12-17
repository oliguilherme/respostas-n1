#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("cls");
    
    float salario_bruto, salario_liquido, imposto;
    int tipo_funcionario;

    printf("Sal�rio: ");
    scanf("%f", &salario_bruto);

    if (salario_bruto > 4500.0) {
        imposto = 0.275 * salario_bruto;
        salario_liquido = salario_bruto - imposto;
    } else if (salario_bruto >= 3000.0 && salario_bruto <= 4500.0) {
        printf("Tem dependentes? (1 - Sim | 0 - N�o)");
        scanf("%d", &tipo_funcionario);
        if (tipo_funcionario == 1) {
            imposto = 0.15 * salario_bruto;
            salario_liquido = salario_bruto - imposto;
        } else {
            imposto = 0.225 * salario_bruto;
            salario_liquido = salario_bruto - imposto;
        }
    } else {
        imposto = 0.075 * salario_bruto;
        salario_liquido = salario_bruto - salario_bruto;
    }

    printf("\nSal�rio bruto: R$%.2f\nImposto de renda: R$%.2f\nSal�rio l�quido: R$%.2f\n\n", salario_bruto, imposto, salario_liquido);

    system("pause");
    return 0;
}