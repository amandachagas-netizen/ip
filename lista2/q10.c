#include <math.h>
#include <stdio.h>
// Uma struct em C é um jeito de agrupar
//  variáveis de tipos diferentes sob um único nome
struct ponto { // teria como criar ponteiro pra isso, com o sizeof q falou???
    // se fossem N pontos?
    float u, x, y, z;
}; // falaram q declarar fora eh mlr
struct ponto p1;
struct ponto p2;

int main() {
    int n; // nmr de pontos
    int i;
    float dist;

    scanf("%d", &n);
    scanf("%f%f%f%f", &p1.u, &p1.x, &p1.y, &p1.z); // le o ponto 1
    for (i = 0; i < n - 1; i++) {
        scanf("%f%f%f%f", &p2.u, &p2.x, &p2.y, &p2.z); // le o outro
        dist = sqrt(pow(p2.u - p1.u, 2) + pow(p2.x - p1.x, 2) +
                    pow(p2.y - p1.y, 2) + pow(p2.z - p1.z, 2));
        printf("%.2f\n", dist);
        p1 = p2; // essa cópia precisa acontecer a cada iteração,
        // pra preparar o p1 certo pra próxima volta do laço
    }

    return 0;
}