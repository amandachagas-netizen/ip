#include <stdio.h>
#include <string.h>

int strcmpnerd(char *s1, char *s2) {
    int i = 0;
    // valor pd ser 0, 1 ou -1

    *s1 = &s1[0];
    *s2 = &s2[0];
    if (*s1 == *s2) {
        return 0;
    }

    if ((s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0') &&) {
    }
}

int main() {
    int n;
    int valor;
    valor = strcmpnerd(n);

    scanf("%d", &n);
    printf("%d", valor);

    return 0;
}