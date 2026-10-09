#include <stdio.h>

int main() {
    double x;
    int n;
    int i;
    double termo, soma; //termo vai guardar o valor do termo atual da série (ex: x²/2!).
                        //soma: vai acumular a soma de todos os termos calculados, resultando na aproximação de eˣ.

    scanf("%lf %d", &x, &n);

    termo = 1.0; //Inicializa termo com 1.0, que é o valor do primeiro termo da série (n=0): x⁰/0! = 1/1 = 1./
    soma = 1.0; //Inicializa soma também com 1.0, já contabilizando o termo n=0 calculado acima. Assim, o laço abaixo só precisa se preocupar com os termos de n=1 até n=N.

    for (i = 1; i <= n; i++) //i = 1: começa em 1, pois o termo n=0 já foi somado antes do laço.
//i <= n: repete enquanto i for menor ou igual a n (quantidade de termos restantes a calcular).
//i++: incrementa i em 1 a cada repetição.//
{
        termo = termo * x / i; //Calcula o próximo termo da série a partir do termo anterior
        soma += termo; //Soma o termo recém-calculado ao acumulador soma (equivale a soma = soma + termo).
    }

    printf("e^%.2f = %.6f\n", x, soma);

    return 0;
}