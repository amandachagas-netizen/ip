#include <stdio.h>

long int bin2dec(long int bin) {
    long int decimal = 0;
    long int potencia = 1;
    int negativo = 0;

    if (bin < 0) {
        negativo = 1;
        bin = -bin;
    }

    while (bin > 0) {
        long int digito = bin % 10;
        decimal += digito * potencia;
        potencia *= 2;
        bin /= 10;
    }

    if (negativo) {
        decimal = -decimal;
    }

    return decimal;
}

int main() {
    

    return 0;
}