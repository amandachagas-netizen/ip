#include <stdio.h>
#define N 100001

void str_clean(char str[], char clr[]) {
    int i, j, w = 0;
    int achou; // ainda n achou
    for (i = 0; str[i] != '\0'; i++) {
        int achou = 0;
        for (j = 0; clr[j] != '\0'; j++) {
            if (str[i] == clr[j]) {
                achou = 1; // verdadeiro
            }
        }
        if (achou == 0) {
            str[w] = str[i];
            w++;
        }
    }
    str[w] = '\0';
}

int main() {
    char str[N]; // string original
    char clr[N]; // lista de caracteres indesejados
    scanf("%[^\n]%*c", str);
    scanf("%[^\n]%*c", clr);
    str_clean(str, clr);
    printf("%s\n", str);
    return 0;
}