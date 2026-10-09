#include <stdio.h>
#include <string.h> //pra ler o tamanho da string, affe, vo ter
// que descobrir como q usa essa bagaça
//  São feitas
//  três passadas em todo o texto.

int main() {
    int n;
    char m[1004];
    int i = 0;
    int j = 0;

    scanf("%d%*c", &n); // lembra pra onde o enter vai scanf com *c

    // passada 1 = anda 3 pra frente na tabela ascii//
    for (i = 0; i < n; i++) {
        int tamanho = 0;
        scanf("%[^\n]%*c", m);
        for (j = 0; m[j] != '\0'; j++) {
            if ((m[j] >= 'a' && m[j] <= 'z') || (m[j] >= 'A' && m[j] <= 'Z')) {
                m[j] += 3;
            }
        }

        // printf("%s\n", m);

        while (m[tamanho] != '\0') {
            tamanho++;
        }
        int inicio = 0;
        int fim = tamanho - 1;

        while (inicio < fim) {
            char temp = m[inicio];
            m[inicio] = m[fim];
            m[fim] = temp;

            inicio++;
            fim--;
        }

        // abc - cba - cba - abc

        for (j = (tamanho / 2); j < tamanho; j++) {
            m[j] -= 1;
        }
        printf("%s\n", m);
    }

    // Na segunda passada, a linha deverá ser invertida

    // Na terceira e última passada,
    // todo e qualquer caractere a partir da metade em diante (truncada) devem
    // ser deslocados uma posição para a esquerda na tabela ASC

    return 0;
}