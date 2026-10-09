#include <stdio.h>

int main() {
    int numero;
    int somaPar = 0, contadorPar = 0;
    int somaImpar = 0, contadorImpar = 0;
    double mp = 0, mi = 0;

    scanf("%d", &numero);

    while (numero != 0) {
        if (numero % 2 == 0) {
            somaPar += numero;
            contadorPar++;
        } else {
            somaImpar += numero;
            contadorImpar++;
        }

        scanf("%d", &numero);
    }

    if (contadorPar > 0)
        mp = (double) somaPar / contadorPar;

    if (contadorImpar > 0)
        mi = (double) somaImpar / contadorImpar;

    printf("MEDIA PAR: %.6lf\n", mp);
    printf("MEDIA IMPAR: %.6lf\n", mi);

    return 0;
}