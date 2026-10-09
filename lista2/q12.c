#include <stdio.h>
#include <stdlib.h>
// Você deve implementar três funções, uma para criar uma matriz alocada
// dinamicamente, outra para liberar a memória da matriz e uma função que recebe
// a matriz e retorne 0 ou 1, sendo que o 0 (zero) indica que a matriz não é de
// permutação
int **cria_matrix(int n) {
    // ssa função recebe um valor "n" e retorna um ponteiro
    // para uma matriz quadrada de inteiros com dimensão nxn.
    // A memória é alocada dinamicamente com uma estrutura bidimensional.
    int **m = (int **)malloc(n * sizeof(int *));
    // malloc aloca memoria, espaço q um ponteiro aponta
    //  int ** = indica q eh inteiro
    int i;
    for (i = 0; i < n; i++) {
        m[i] = (int *)malloc(n * sizeof(int));
    }
    return m;
}
// Essa função recebe um ponteiro para uma matriz alocada
// dinamicamente e libera a memória ocupada por ela.
void destroi_matrix(int **m, int n) {
    int i;
    for (i = 0; i < n; i++) {
        free(m[i]);
    }
    free(m);
}

/*Essa função recebe um ponteiro para uma matriz alocada
 * dinamicamente, sua dimensão n e retorna 1 caso essa
 * matriz seja uma matriz de permutação ou 0 caso contrário.
 * Além disso, essa função também calcula a soma de todos os
 * elementos da matriz e a retorna via referência pelo
 * ponteiro "soma".*/

int ePermutacao(int **m, int n, int *soma) {
    *soma = 0;

    int num_1_l = 0;
    int num_1_c = 0;
    int el, ec;
    int r = 1;

    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            el = m[i][j];
            if (el != 0 && el != 1) {
                r = 0;
            } // n esquece do printf
            if (el == 1) {
                num_1_l++;
            }

            ec = m[j][i];
            if (ec != 0 && ec != 1) {
                r = 0;
            } // n esquece do printf
            if (ec == 1) {
                num_1_c++;
            }
            *soma += el;
        }
        if (num_1_l != 1 || num_1_c != 1) {
            r = 0;
        }

        num_1_l = 0;
        num_1_c = 0;
    }
    return r;
}
int main() {
    int n;

    scanf("%d", &n);

    int soma;
    int **matriz = cria_matrix(n);

    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("%d\n", n);

    if (ePermutacao(matriz, n, &soma)) {
        printf("PERMUTACAO\n");
    }
    else {
        printf("NAO E PERMUTACAO\n");
    }

    printf("%d\n", soma);

    destroi_matrix(matriz, n);

    return 0;
}