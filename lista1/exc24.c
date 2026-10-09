#include <stdio.h>

int main(void) {
    int n;

    while (scanf("%d", &n) == 1 && n != 0) {
        int a, b, c;
        int intercalada = 1;
        int subindoAnterior = -1;
        int subindoAtual;
        int i;

        scanf("%d", &a);
        scanf("%d", &b);

        for (i = 2; i < n; i++) {
            scanf("%d", &c);

            if (a == b || b == c) {
                intercalada = 0;
            } else {
                subindoAtual = b > a;

                if (subindoAnterior != -1 && subindoAtual == subindoAnterior) {
                    intercalada = 0;
                }

                subindoAnterior = subindoAtual;
            }

            a = b;
            b = c;
        }

        if (intercalada)
            printf("Intercalada\n");
        else
            printf("Nao intercalada\n");
    }

    return 0;
}