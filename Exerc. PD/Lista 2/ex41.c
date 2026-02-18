/*

    Lista 2 - Exercício 41:
    Cálculo do IMC.

*/

#include <stdio.h>

int main () {
    float a, p;
    float imc;

    /* Leitura da altura */
    printf("Altura (em metros): "); 
    scanf("%f", &a);

    /* Leitura do peso */
    printf("Peso (em kg): ");
    scanf("%f", &p);

    /* Cálculo do IMC */
    imc = p / (a * a);

    printf("IMC: %.1f\n", imc);

    /* Classificação */
    if (imc < 18.5)
        printf("Abaixo do peso.\n");
    else if (imc < 25.0)
        printf("Saudável.\n");
    else if (imc < 30.0)
        printf("Peso em excesso.\n");
    else if (imc < 35.0)
        printf("Obesidade Grau I.\n");
    else if (imc < 40.0)
        printf("Obesidade Grau II.\n");
    else
        printf("Obesidade Grau III.\n");

    return 0;
}