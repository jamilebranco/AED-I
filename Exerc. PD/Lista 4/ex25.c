#include <stdio.h>

int main() {
    int jogodavelha[3][3] = {
            {-1, 1, 1}, 
            {-1, -1, 0}, 
            {0, 1, 0}
    };
    int p = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (jogodavelha[i][j] == 0) {
                jogodavelha[i][j] = -1;
                p = 1;
                break;
            }
        }
        if (p)
            break;
    }

for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", jogodavelha[i][j]);
        }
        printf("\n");
    }

    return 0;
}