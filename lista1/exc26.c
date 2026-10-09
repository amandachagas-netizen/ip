#include <stdio.h>

int main() {
    int valor, resto;
    int notas_100, notas_50, notas_10, moedas_1;

    scanf("%d", &valor);

    notas_100 = valor / 100;
    resto = valor % 100;

    notas_50 = resto / 50;
    resto = resto % 50;

    notas_10 = resto / 10;
    resto = resto % 10;

    moedas_1 = resto;

    printf("NOTAS DE 100 = %d\n", notas_100);
    printf("NOTAS DE 50 = %d\n", notas_50);
    printf("NOTAS DE 10 = %d\n", notas_10);
    printf("MOEDAS DE 1 = %d\n", moedas_1); // então amores, pq q minhas moedas de 1 n tão dando certo //
    // e o sharif aceitou???//

    return 0;
}