// como montar um vetor de fraçoes
#include <math.h>
#include <stdio.h>

/*
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

double string2double(const char *str) {
    double n = 0;
    int i = 0;
    double divisor = 0.1;
    double r = 0;
    int sinal = 1;
    double f = 0;

    // pegar antes do .
    if (str[i] == '\0') return 0;

    if (str[i] == '-') {
        sinal = -1;
        i++;
    }

    while (str[i] >= '0' && str[i] <= '9') {
        n = n * 10 + (str[i] - '0');
        i++;
    }
    if (str[i] == '.') {
        i++;
        while (str[i] >= '0' && str[i] <= '9') {
            r += (str[i] - '0') * divisor;
            divisor /= 10.0;

            i++;
        }
    }

    f = (n + r) * sinal;

    return f;
}

int main() {
    char strR[201];
    double retorno;

    while (scanf("%s", strR) != EOF) {
        retorno = string2double(strR);
        printf("%.3lf %.3lf\n", retorno, retorno * 2);
    }

    return 0;
}
*/// potencia perfeita

/*int potencia_perfeita(int n, int *b, int *p) {
    int n;
    int B;
    int P;
    int i = 0;
    int intpp = 1;

    while (i < n) {
        *b = B;
        *p = P;
        if (n < 1) break;
        if (P < 2) break;
        if (n > 1 &&n = pow(B, P)) {
            intpp = 1;
        }
        else {
            intpp = 0;
        }

        i++;
    }
    if (intpp == 1) return 1;
    if (intpp == 0) return 0;
}

int main() {
    int N;
    int a = 1, b, c;
    int r, d = 0;
    scanf("%d", &N);
    while (d < N) {
        r = potencia_perfeita(a, &b, &c);
        if (r == 1) {
            d++;
            printf("%d: %d^%d", a, b, c);
        }
        a++;
    }
    return 0;
    }


    void remove_digitos(char *str, int *digitos) {
        int i, w = 0;
        int achou = 0;

        digitos[0] = 0;
    digitos[1] = 0;
    digitos[2] = 0;
    digitos[3] = 0;
    digitos[4] = 0;
    digitos[5] = 0;
    digitos[6] = 0;
    digitos[7] = 0;
    digitos[8] = 0;
    digitos[9] = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '0') digitos[0]++;
        if (str[i] == '1') digitos[1]++;
        if (str[i] == '2') digitos[2]++;
        if (str[i] == '3') digitos[3]++;
        if (str[i] == '4') digitos[4]++;
        if (str[i] == '5') digitos[5]++;
        if (str[i] == '6') digitos[6]++;
        if (str[i] == '7') digitos[7]++;
        if (str[i] == '8') digitos[8]++;
        if (str[i] == '9') digitos[9]++;
    }
    for (i = 0; str[i] != '\0'; i++) {
        achou = 0;
        if (str[i] == '0' || str[i] == '1' || str[i] == '2' || str[i] == '3' ||
            str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' ||
            str[i] == '8' || str[i] == '9') {
                achou = 1;
        }
        if (achou == 0) {
            str[w] = str[i];
            w++;
        }
    }
    str[w] = '\0';
}

int main() {
    char s[1001];
    int digitos[10];
    scanf("%[^\n]%*c", s);
    remove_digitos(s, digitos);

    printf("%s\n", s);
    printf("0: %d\n", digitos[0]);
    printf("1: %d\n", digitos[1]);
    printf("2: %d\n", digitos[2]);
    printf("3: %d\n", digitos[3]);
    printf("4: %d\n", digitos[4]);
    printf("5: %d\n", digitos[5]);
    printf("6: %d\n", digitos[6]);
    printf("7: %d\n", digitos[7]);
    printf("8: %d\n", digitos[8]);
    printf("9: %d\n", digitos[9]);

    return 0;
    }


    void cesar(char *str, int k) {
        int j;

    for (j = 0; str[j] != '\0'; j++) {
        if (str[j] == ' ') {
            continue;
        }
    }
    for (j = 0; str[j] != '\0'; j++) {
        if (str[j] >= 'a' && str[j] <= 'z') {
            int deslocamento = (str[j] - 'a' + k) % 26;
            if (deslocamento < 0) deslocamento += 26;
            str[j] = deslocamento + 'a';
        }
        if (str[j] >= 'A' && str[j] <= 'Z') {
            int deslocamento = (str[j] - 'A' + k) % 26;
            if (deslocamento < 0) deslocamento += 26;
            str[j] = deslocamento + 'A';
        }
    }
}

int main() {
    char txt[301];
    int n;

    scanf("%d", &n);
    scanf(" %[^\n]", txt);

    cesar(txt, n);

    printf("%s\n", txt);

    return 0;
}

// str pra inteiro

long string2int(const char *str, int base) {
    int i = 0;
    int sinal = 1;
    long numero = 0;
    long resultado = 0;

    if (str[i] == '-') {
        sinal = -1;
        i++;
    }
    for (; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            numero = str[i] - '0';
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            numero = str[i] - 'A' + 10;
        }
        else {
            numero = str[i] - 'a' + 10;
        }
        resultado = resultado * base + numero; // vem um 110 na base 2
        // entra 1, resu=0, 0*2 +1 = 1, ai vai pro resto
    }
    return (resultado * sinal);
}

int main() {
    char txt[501];
    int b;
    long int s; // saida

    scanf("%s %d", txt, &b);
    s = string2int(txt, b);
    printf("%ld\n", s);
}
double string2double(const char *str) {
    int i = 0;
    int sinal = 1;
    double resultado = 0;
    double divisor = 0.1;
    double f = 0;
    double n = 0;
    int p = 0, j = 0;
    double d = 1;

    if (str[i] == '-') {
        sinal = -1;
        i++;
    }

    while (str[i] >= '0' && str[i] <= '9') {
        n = n * 10 + (str[i] - '0');
        i++;
    }
    if (str[i] == '.') {
        i++;
        while (str[i] >= '0' && str[i] <= '9') {
            resultado += (str[i] - '0') * divisor;
            divisor /= 10.0;

            i++;
        }
    }
    if (str[i] == 'e' || str[i] == 'E') {
        p = (str[i + 1] - '0');
        while (j < p) {
            d *= 10;
            j++;
        }
        if (str[i + 1] == '-') {
            p = (str[i + 2] - '0');
            while (j < p) {
                d /= 10;
                j++;
            }
        }
    }

    f = (n + resultado) * sinal * d;

    return f;
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

int tamanho(char str[]) {
    int i;
    for (i = 0; str[i] != '\0'; i++)
        ;
        return i;
    }

void inverter(char str[]) {
    int inicio = 0;
    int fim = tamanho(str) - 1;

    while (inicio < fim) {
        char temp = str[inicio];
        str[inicio] = str[fim];
        str[fim] = temp;

        inicio++;
        fim--;
    }
}

int main() {
    char s[10001];

    scanf(" %[^\n]", s);

    inverter(s);

    printf("%s\n", s);

    return 0;
}

//comparaçao de textos
#include <stdio.h>

double raiz(double x) {
    double r = x;
    int k;

    if (x == 0) return 0;

    for (k = 0; k < 50; k++) {
        r = (r + x / r) / 2;
    }
    return r;
}

void conta_vogais(const char *str, int inicio, int fim, int *freq) {
    int i;
    char c;

    for (i = 0; i < 5; i++) freq[i] = 0;

    for (i = inicio; i < fim; i++) {
        c = str[i];
        if (c >= 'A' && c <= 'Z') c = c + ('a' - 'A');   // vira minúscula

        if (c == 'a') freq[0]++;
        else if (c == 'e') freq[1]++;
        else if (c == 'i') freq[2]++;
        else if (c == 'o') freq[3]++;
        else if (c == 'u') freq[4]++;
    }
}

int main() {
    char linha[2002];
    int fa[5], fb[5];
    int i, qtd_pv = 0, pos_pv = -1, tam;
    double soma = 0;

    scanf(" %2001[^\n]", linha);

    for (i = 0; linha[i] != '\0'; i++) {
        if (linha[i] == ';') {
            qtd_pv++;
            pos_pv = i;
        }
    }
    tam = i;

    if (qtd_pv != 1) {
        printf("FORMATO INVALIDO!\n");
        return 0;
    }

    conta_vogais(linha, 0, pos_pv, fa);
    conta_vogais(linha, pos_pv + 1, tam, fb);

    printf("(%d,%d,%d,%d,%d)\n", fa[0], fa[1], fa[2], fa[3], fa[4]);
    printf("(%d,%d,%d,%d,%d)\n", fb[0], fb[1], fb[2], fb[3], fb[4]);

    for (i = 0; i < 5; i++) {
        soma += (fa[i] - fb[i]) * (fa[i] - fb[i]);
    }
    printf("%.2lf\n", raiz(soma));

    return 0;
}
    Quando você copia 10 linhas do enunciado de um problema e cola no terminal:
Todas as quebras de linha (\n) são enviadas para o buffer de uma vez só. O
operador %[^\n] pode pular leituras ou fazer o terminal parecer "preso" se
houver linhas em branco ou múltiplos \n acumulados entre as frases coladas. É aí
que entram o getchar() e o %*c: getchar(): Consome o \n logo após o scanf("%d",
&n).
%*c: Descarta o \n do final de cada frase lida no momento em que ela é lida, sem
deixar nada pendente no buffer para a próxima iteração. scanf("%*[\n]"): Consome
especificamente o Enter (\n) que sobrou na linha sem travar o terminal esperando
novo texto. Em scanf("%[^\n]%*c", s);, o %[^\n] lê a linha e o %*c come o \n que
sobrou. É o mesmo efeito de um getchar() depois. Devolver um texto completo /
string char* (um ponteiro para char)

int vet[3] = {5, 15, 25};
int *p = vet; // Aponta para vet[0] (não precisa usar &vet)

// Aritmética de ponteiros:
printf("%d\n", *p);       // Imprime 5  (vet[0])
printf("%d\n", *(p + 1)); // Imprime 15 (vet[1])
void* = ponteiro sem tipo/ tamanho indefinido
void* p;
int x;
 p =&x;

*/

int ehPrimo(int n) {
    int div = 0;
    int d = 0;

    for (d = 1; d <= n; d++) {
        if (n % d == 0) div++;
    }
    if (div == 2) return 1;
    else return 0;
}
int potencia_prima(int n, int *k, int *p) {
    int K = 1;
    int P = 0;
    int x;

    while (1) {
        if (K > n) break;
        if (ehPrimo(K) == 1) {
            P = 1;
            while (1) {
                x = pow(K, P);
                if (x > n) break;
                else if (x == n) {
                    *k = K;
                    *p = P;
                    return 1;
                }
                P++;
            }
        }
        K++;
    }
    return 0;
}

int main() {
    int N;
    int n = 1,
        c = 0; // n sao as potencias primas q vo testar, c conta essas potencias
    int PP;
    int k;
    int p;
    scanf("%d", &N);

    while (c < N) {
        PP = potencia_prima(n, &k, &p);
        if (PP == 1) {
            c++;
            printf("%d : %d^%d\n", n, k, p);
        }
        n++;
    }
    return 0;
}