#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < 2) {
        printf("Campeonato invalido!\n");
        return 0;
    }

    int contador = 1;
    int i, j;

    for (i = 1; i <= n; i++) {
        for (j = i + 1; j <= n; j++) {
            printf("Final %d: Time%d X Time%d\n", contador, i, j);
            contador++;
        }
    }

    return 0;
}