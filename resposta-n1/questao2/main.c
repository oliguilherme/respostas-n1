#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("cls");
    
    float peso_total, dif, custo;

    printf("Peso total das frutas em kg (com ate uma casa decimal): ");
    scanf("%f", &peso_total);

    dif = peso_total - (int)peso_total;
    
    if (peso_total <= 2.0) {
        if (dif == 0.0) {
            custo = 5.0 * peso_total;
        } else {
            custo = 5.0 * ((peso_total + 1.0) - dif);
        }
    } else if (peso_total > 2.0 && peso_total <= 5.0) {
        if (dif == 0) {
            custo = 4.0 * peso_total;
        } else {
            custo = 4.0 * ((peso_total + 1.0) - dif);
        }
    } else {
        if (dif == 0) {
            custo = 3.0 * peso_total; 
        } else {
            custo = 3.0 * ((peso_total + 1.0) - dif);
        }
    }

    printf("\nValor a ser pago em %.1fkg: R$%.1f\n\n", peso_total, custo);
    system("pause");
    return 0;
}