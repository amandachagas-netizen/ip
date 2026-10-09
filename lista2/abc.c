#include <stdio.h>

int main() {
    int t;
    int l1, l2[1001], l3, l4[1001];
    int i, j;
    int repetido = 0;

    scanf("%d", &t);
    while (t > 0) {
        repetido = 0;
        scanf("%d", &l1);
        for (i = 0; i < l1; i++) {
            scanf("%d", &l2[i]);
        }
        scanf("%d", &l3);
        for (i = 0; i < l3; i++) {
            scanf("%d", &l4[i]);
        }
        for (i = 0; i < l1; i++) {
            for (j = 0; j < l3; j++) {
                if (l2[i] == l4[j]) {
                    repetido++;
                    break;
                }
            }
        }
        t--;
        printf("%d\n", repetido);
    }

    return 0;

// palindromo
#include <stdio.h>
    int tamanho(char *str) {
        int i;
        for (i = 0; str[i] != '\0'; i++) {
        }
        return i;
    }

    int main() {
        char teste[100001];

        while (scanf("%s", teste) != EOF) {
            int cont = 1;
            int inicio = 0;
            getchar();
            int fim = tamanho(teste) - 1;
            while (inicio < fim) {
                if (teste[inicio] != teste[fim]) {
                    cont = 0;
                    break;
                }

                inicio++;
                fim--;
            }
            if (cont == 1) {
                printf("sim\n");
            }
            else {
                printf("nao\n");
            }
        }
        return 0;
    }
}
int strcmpnerd(char *s1, char *s2) {
    int i = 0;
    // valor pd ser 0, 1 ou -1

    *s1 = &s1[0];
    *s2 = &s2[0];
    if (*s1 == *s2) {
        return 0;
    }

    if ((s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0') &&) {
    }
}

int main() {
    int n;
    int valor;
    valor = strcmpnerd(n);

    scanf("%d", &n);
    printf("%d", valor);

    return 0;
}
*/
#include <stdio.h>
    double converte(const char *str) {
    int i = 0, j;
    int sinal = 1;
    int sinalExp = 1;
    int p = 0;
    double n = 0.0;
    double resultado = 0.0;
    double divisor = 0.1;
    double d = 1.0;

    // sinal do número
    if (str[i] == '-') {
        sinal = -1;
        i++;
    }
    else if (str[i] == '+') {
        i++;
    }

    // parte inteira
    while (str[i] >= '0' && str[i] <= '9') {
        n = n * 10 + (str[i] - '0');
        i++;
    }

    // parte decimal
    if (str[i] == '.') {
        i++;
        while (str[i] >= '0' && str[i] <= '9') {
            resultado += (str[i] - '0') * divisor;
            divisor /= 10.0;
            i++;
        }
    }

    // expoente
    if (str[i] == 'e' || str[i] == 'E') {
        i++;

        if (str[i] == '-') {
            sinalExp = -1;
            i++;
        }
        else if (str[i] == '+') {
            i++;
        }

        // lê todos os dígitos do expoente (ex.: 33)
        while (str[i] >= '0' && str[i] <= '9') {
            p = p * 10 + (str[i] - '0');
            i++;
        }

        for (j = 0; j < p; j++) {
            if (sinalExp == 1) d *= 10.0;
            else d /= 10.0;
        }
    }

    return (n + resultado) * sinal * d;
}
int main() {
    char txt[501];
    int b;
    double n; // saida

    while (scanf("%s", txt) != EOF) {
        n = string2double(txt);
        printf("%.3lf %.3lf\n", n, n + n);
    }
    return 0;
}
