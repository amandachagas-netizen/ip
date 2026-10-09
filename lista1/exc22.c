#include <stdio.h>

int main() {
    int n, centena, dezena, unidade, invertido;

    scanf("%d", &n);

    centena = n / 100;      // primeiro dígito
    dezena  = (n / 10) % 10; // segundo dígito
    unidade = n % 10;        // terceiro dígito

    invertido = unidade * 100 + dezena * 10 + centena;

    printf("%d\n", invertido);

    return 0;
}