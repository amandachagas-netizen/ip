#include <stdio.h>
#include <string.h>

int main() {
    int c, i, b, e;
    char atual[100001];
    char r[100001];
    char rf[100001];

    scanf("%d", &c);
    while (c--) {
        scanf("%d%d", &b, &e);
        r[0] = '\0';

        // crescente
        for (i = b; i <= e; i++) {
            sprintf(atual, "%d", i);
            int fim = strlen(r);
            int k = 0;
            while (atual[k] != '\0') {
                r[fim] = atual[k];
                fim++;
                k++;
            }
            r[fim] = '\0';
        }

        // espelho: r de trás para frente
        int n = strlen(r);
        for (i = 0; i < n; i++) {
            rf[i] = r[n - 1 - i];
        }
        rf[n] = '\0';

        printf("%s%s\n", r, rf);
    }
    return 0;
}

/*#include <stdio.h>
// le cresc e decresc
#include <string.h>

int main() {
    // primeiro vamo fazer a seq crescente
    int c;
    int i;
    int b, e;
    char atual[100001];
    char r[100001];
    char rf[100001];

    r[0] = '\0';
    rf[0] = '\0';

    // laço tem q ir de b até e
    scanf("%d", &c);
    scanf("%d%d", &b, &e);
    for (i = b; i <= e; i++) { // i vai entrar no sprintf eh issoooo

        sprintf(atual, "%d",
                i); // como você acha onde termina o que já está em r
        //(o \0 dele) pra começar a copiar atual a partir dali? -- strlen
        int fim = strlen(r); // acha onde "r" termina
        int k = 0;
        while (atual[k] != '\0') {
            r[fim] = atual[k];
            fim++;
            k++;
        }
        r[fim] = '\0';
    }

    for (i = e; i >= b; i--) {
        sprintf(atual, "%d", i);
        int final = strlen(rf);
        int j = 0;
        while (atual[j] != '\0') {
            rf[final] = atual[j];
            final++;
            j++;
        }
        rf[final] = '\0';
    }
    printf("%s%s\n", r, rf);
    // seq descrescente

    return 0;
}*/

/*int tamanho(char *str) {

    int i, tamanho = 0;
    for (i = 0; str[i] != '\0'; i++) {
        tamanho++;
    }
    return tamanho;
}

void inverter(char str[]) {

    int inicio = 0;
    int tam;
    int fim = tamanho(str) - 1;
    while (inicio < fim) {
        char temp = str[inicio];
        str[inicio] = str[fim];
        str[fim] = temp;
        inicio++;
        fim--;
    }
}

void deslocar(char *str, int n) {

    // scanf("%d", &n);
    int j;

    for (j = 0; str[j] != '\0'; j++) {
        if (str[j] >= 'a' && str[j] <= 'z') {
            int deslocamento = (str[j] - 'a' + n) % 26;
            if (deslocamento < 0)
                deslocamento += 26;
            str[j] = deslocamento + 'a';
        }
        if (str[j] >= 'A' && str[j] <= 'Z') {
            int deslocamento = (str[j] - 'A' + n) % 26;
            if (deslocamento < 0)
                deslocamento += 26;
            str[j] = deslocamento + 'A';
        }
        if (str[j] >= '0' && str[j] <= '9') {
            int deslocamento = (str[j] - '0' + n) % 10;
            if (deslocamento < 0)
                deslocamento += 10;
            str[j] = deslocamento + '0';
        }
    }
}

void trocarParEImpar(char *str) { //?????????????????????????

    int j;
    char temp;
    for (j = 0; str[j] != '\0' && str[j + 1] != '\0'; j += 2) {
        temp = str[j];
        str[j] = str[j + 1];
        str[j + 1] = temp;
    }
}

void inverterCaixa(char *str) {

    int j;
    for (j = 0; str[j] != '\0'; j++) {
        if (str[j] >= 'a' && str[j] <= 'z') {
            str[j] -= 32;
        }
        else {
            if (str[j] >= 'A' && str[j] <= 'Z') {
                str[j] += 32;
            }
        }
    }
}

void rotacionaDireita(char *str, int n) {
    char temp;
    int j;
    int fim = tamanho(str) - 1;

    temp = str[fim];
    for (j = fim; j > 0; j--) {

        str[j] = str[j - 1];
    }
    str[0] = temp;
}

void rotacionaEsquerda(char *str, int n) {
    char temp;
    int j;
    int inicio = 0, fim = tamanho(str) - 1;

    temp = str[0];
    for (j = 0; j < fim; j++) {

        str[j] = str[j + 1];
    }
    str[fim] = temp;
}

void rotacionar(char *str, int n) {

    int cont;
    int tam = tamanho(str);

    if (n > 0) {
        n = n % tam;
    }
    if (n > 0) {
        for (cont = 0; cont < n; cont++) {
            rotacionaDireita(str, n);
        }
    }
    else if (n < 0) {
        for (cont = 0; cont < -n; cont++) {
            rotacionaEsquerda(str, n);
        }
    }
}

void trocarMetades(char *str) {

    int j, tam = tamanho(str);
    int mid = tam / 2;
    int inicioSeg = tam - mid;
    char temp;

    for (j = 0; j < mid; j++) {
        temp = str[j];
        str[j] = str[inicioSeg + j];
        str[inicioSeg + j] = temp;
    }
}

int main() {

    char str[10001], str2[10001];
    int op, n;
    int continua = 1;

    scanf("%[^\n]", str);
    scanf("%d", &op);

    while (continua) {
        switch (op) {
        case 1:
            inverter(str);

            break;
        case 2:
            scanf("%d", &n);
            deslocar(str, n);

            break;
        case 3:
            trocarParEImpar(str);

            break;
        case 4:
            inverterCaixa(str);

            break;
        case 5:
            scanf("%d", &n);
            rotacionar(str, n);

            break;
        case 6:
            trocarMetades(str);
            break;
        case 0:
            continua = 0;
            break;
        default:
            continua = 0;
            break;
        }
        if (continua) {
            scanf(" %d", &op);
        }
    }
    printf("%s\n", str);

    return 0;
}*/

/*Função que retorna o máximo divisor comum de dois números positivos dados
int MaxDivCom(int x, int y)
{
int Resto;
Resto = x % y;
while (Resto != 0)
{
x = y;
y = Resto;
Resto = x % y;
}
return (y);
}
/*Função principal: recebe os números e ativa a função MaxDivCom()
main()
{
int Mdc, a, b;
printf("Digite os dois inteiros");
scanf("%d %d", &a, &b);
Mdc = MaxDivCom(a, b);
printf("Mdc(%d, %d) = %d \n", a, b, Mdc);
}
#include <stdio.h>
main()
{
float *a, *b;
float Aux, x, y;
x = 1; /* o conteúdo de x agora é igual a 1
y = 2;    /* o conteúdo de y agora é igual a 2
a = &x;   /* a aponta para x
b = &y;   /* b aponta para y
Aux = *a; /* o conteúdo de Aux agora é 1 (conteúdo de x)
*a = *b;  /* o conteúdo de x agora é 2 (conteúdo de y)
*b = Aux; o conteúdo de y agora é 1
printf("x = %f e y = %f \n", x, y);
24; 24 x 5 = 120; ...; etc., até multiplicar todos os naturais até n.

long int Fatorial(int n)
{
long int Fat;
int i;
Fat = 1;
for (i = 2; i <= n; i = i + 1)
Fat = Fat * i;
return (Fat);
}

long int FatRec(int n)
{
if ((n == 0) || (n == 1))
return (1);
else
return (n * FatRec(n - 1));
}

Programa que implementa o jogo Torre de Hanoi
#include <stdio.h>
void MoveDisco(char t1[10], char t2[10])
{
printf("%s --> %s \n", t1, t2);
}
void Hanoi(int x, char o[10], char a[10], char d[10])
{
if (x > 0)
{
Hanoi(x - 1, o, d, a);
MoveDisco(o, d);
Hanoi(x - 1, a, o, d);
}
}
main()
{
int n;
printf("Digite o numero de discos \n");
scanf("%d", &n);
Hanoi(n, "origem", "auxiliar", "destino");
}
unsigned long int fat(unsigned int n) {
    long int Fatorial = 1;
    unsigned int i;

    for (i = 2; i <= n; i++) {
        Fatorial = Fatorial * i;
    }
    return Fatorial;
}
int main() {
    unsigned int x;
    long int f;

    f = fat(x);

    scanf("%u", &x);

    printf("%u ! = %lu\n", x, fat(x));
}*/