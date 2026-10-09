#include <stdio.h>

int main() {
    int m, k, x, i;

    scanf("%d", &m);

    for (k = 1; k <= m; k++) {
        x = k*k - k + 1;          // primeiro ímpar do bloco de k

        printf("%d*%d*%d = ", k, k, k);

        for (i = 0; i < k; i++) {
            printf("%d", x);
            if (i < k - 1) printf("+");   // sem espaços, conforme o exemplo
            x += 2;
        }

        printf("\n");
    }

    return 0;
}