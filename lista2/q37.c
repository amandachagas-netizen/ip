#include <stdio.h>

int meu_strlen(char *str) {
    int s = 0;
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        s++;
    }
    return s;
}

int main() {
    char txt[10001];
    int i = 0;
    int j;
    scanf(" %s", txt);

    while (txt[i] != '\0') {
        int count1 = 1;
        int count2 = 0;
        int l = meu_strlen(txt);

        for (j = 0; j <= l - 1; j++) {
            if (txt[j] == ' ') {
                continue;
            }

            else {
                if (count1) {
                    if (txt[i] >= 'a' && txt[i] <= 'z') txt[i] -= 32;

                    count1 = 0;
                    count2 = 1;
                    continue;
                }
            }
            if (count2) {
                if (txt[i] >= 'A' && txt[i] <= 'Z') txt[i] += 32;

                count1 = 1;
                count2 = 0;
                continue;
            }
        }
    }

    printf("%s\n", txt);

    return 0;
}
