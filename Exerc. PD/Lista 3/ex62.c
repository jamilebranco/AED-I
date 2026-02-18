/*

    Lista 3 - Exercício 62:
    Conta o total de letras dos números de 1 a 1000 por extenso.
    (Validado para o intervalo de 10 a 40)
    
*/

#include <stdio.h>

int main() {
    int total = 0;

    /* Quantidade de letras */
    int unid[] = {0,2,4,4,6,5,4,4,4,4}, // 1-9
        dez[] = {3,4,4,5,8,6,9,9,7,8},  // 10-19
        dezen[] = {0,0,5,6,8,9,8,7,7,7},    // 20-90
        cent[] = {0,5,8,9,12,10,10,10,10,10};   // 100-900

    for (int i = 1; i <= 1000; i++) {
        
        if (i == 1000 || i == 100) {
            total += 3;

        } else if (i > 100) {
            int c = i / 100;    // centenas
            int r = i % 100;    // restante

            total += cent[c];

            if (r != 0) {
                total += 1; // "e"
                
                if (r < 10) {
                    total += unid[r];
                } else if (r < 20) {
                    total += dez[r - 10];
                } else {
                    total += dezen[r / 10];
                    if (r % 10 != 0) {
                        total += 1; // "e"
                        total += unid[r % 10];
                    }
                }
            }

        } else {
            /* 1-99 */
            if (i < 10) {
                total += unid[i];
            } else if (i < 20) {
                total += dez[i - 10];
            } else {
                total += dezen[i / 10];
                if (i % 10 != 0) {
                    total += 1; // "e"
                    total += unid[i % 10];
                }
            }
        }
    }

    printf("Total: %d.\n", total);
    
    return 0;
}