#include <stdio.h>

int main() {
    int matriz[6][6];
    int i = 0, j = 0; // linha e coluna
    int atual = 0, maior = -64;

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 4; i++) { // esqueci agr pq pus 4
        for (j = 0; j < 4; j++) {
            atual = (matriz[i][j] + matriz[i][j + 1] + matriz[i][j + 2] +
                     matriz[i + 1][j + 1] + matriz[i + 2][j] +
                     matriz[i + 2][j + 1] + matriz[i + 2][j + 2]);
            if (atual > maior) {
                maior = atual;
            }
        }
    }
    printf("%d\n", maior);

    return 0;
}
