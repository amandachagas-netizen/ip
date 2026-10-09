#include <stdio.h>

int main() {
    int n;
    while (scanf("%d", &n) == 1 && n != 0) {
        double anterior, atual;
        int ordenada = 1;
        int i;

        scanf("%lf", &anterior);
        for (i = 1; i < n; i++) {
            scanf("%lf", &atual);
            if (atual <= anterior) {
                ordenada = 0;
            }
            anterior = atual;
        }

        if (ordenada) {
            printf("ORDENADA\n");
        } else {
            printf("DESORDENADA\n");
        }
    }
    return 0;
}