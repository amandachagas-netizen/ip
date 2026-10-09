#include <stdio.h>

int main() {
    int N; // N eh caso de teste e de linhas consq, V eh o nmr q vc quer
           // representar
    // em led, mas V eh mtt longo, ent tem q declarar como string
    char V[105]; // pra garantir, joga mais valor no vetor, pq seriam na vdd 101
                 // ou 102
    int leds[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int i, j, total = 0;
    // converter o troço pra numero

    scanf("%d", &N);
    // eh a string td n so o caracter, por isso %s e n %c

    for (j = 0; j < N; j++) {
        scanf("%s", V); // pq esse troço tinha q vir aqui e n fora?
        for (i = 0; V[i] != 0; i++) { // qro converter V[i] pro indice do vetor
            int numero = V[i] - '0';
            // leds[] e ir somando no total
            total += leds[numero];
        }
        printf("%d leds\n", total);

        total = 0; // tem q zerar pro prox valor de teste
    }

    return 0;
}