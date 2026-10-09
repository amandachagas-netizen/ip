// como montar um vetor de fraçoes
#include <stdio.h>

void remove_vogais(char *str, int *vogais) {
    int i, w = 0;
    int achou = 0;

    vogais[0] = 0;
    vogais[1] = 0;
    vogais[2] = 0;
    vogais[3] = 0;
    vogais[4] = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'A' || str[i] == 'a') vogais[0]++;
        if (str[i] == 'E' || str[i] == 'e') vogais[1]++;
        if (str[i] == 'I' || str[i] == 'i') vogais[2]++;
        if (str[i] == 'O' || str[i] == 'o') vogais[3]++;
        if (str[i] == 'U' || str[i] == 'u') vogais[4]++;
    }
    for (i = 0; str[i] != '\0'; i++) {
        achou = 0;
        if (str[i] == 'A' || str[i] == 'a' || str[i] == 'E' || str[i] == 'e' ||
            str[i] == 'I' || str[i] == 'i' || str[i] == 'O' || str[i] == 'o' ||
            str[i] == 'U' || str[i] == 'u') {
            achou = 1; // verdadeiro
        }
        if (achou == 0) {
            str[w] = str[i];
            w++;
        }
    }
    str[w] = '\0';
}

int main() {
    char txt[301];
    int vogais[5];

    scanf("%[^\n]%*c", txt);
    remove_vogais(txt, vogais);
    printf("%s\n", txt);
    printf("a: %d\n", vogais[0]);
    printf("e: %d\n", vogais[1]);
    printf("i: %d\n", vogais[2]);
    printf("o: %d\n", vogais[3]);
    printf("u: %d\n", vogais[4]);

    return 0;
}