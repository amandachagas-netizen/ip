#include <stdio.h>
// ao somar dois valores inteiros, que o resultado seja exibido segundo o
// raciocínio dele, ou seja, sem os Zeros

int main() {
    int m, n;
    char soma[11] = {0};
    int i;

    scanf("%d%d", &m, &n);

    while (m != 0 && n != 0) {
        sprintf(soma, "%d",
                m + n); // destino eh o vetor q recebe a stg gerada pelo printf
        scanf("%d%d", &m, &n); // joguei em altos lugares, aqui deu certo
        for (i = 0; soma[i] != '\0'; i++) {
            if (soma[i] == '0') { // se o c na posiçao i for 0, ignora
                continue; // descobri esse babado aqui q ignora caso seja a cond
            }
            else if (soma[i] != '0') {
                printf("%c", soma[i]);
            }
        }
        printf("\n"); // fui botar \n no outro lá,
                      // saiu erradissimo
    }

    return 0;
}