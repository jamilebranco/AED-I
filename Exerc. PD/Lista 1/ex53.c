/*

    Lista 1 - Exercício 53:
    Calcula o custo para cercar um terreno.

*/

#include <stdio.h>

int main() {
    float c, l, p, per, tot;

    printf("Comprimento: ");
    scanf("%f", &c);

    printf("Largura: ");
    scanf("%f", &l);

    printf("Preço do metro: ");
    scanf("%f", &p);

    /* Cálculo do perímetro */
    per = 2 * (c + l);

    /* Cálculo do custo total */
    tot = per * p;

    printf("\nCusto: R$: %.2f\n", tot);

    return 0;
}