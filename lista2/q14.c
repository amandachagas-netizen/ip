#include <stdio.h>

int main() {
    int n, i = 0, j = 0;
    int A[1000][1000];
    long long tr = 0; // o nmr pode ficar grandinho
    long long resultado = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
            if (i == j) {
                tr += A[i][j];
            }
        }
    } // pq tive q fazer um seg loop?

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) { // Em cada linha de i, o loop de j roda
                                  // inteiro e sobrescreve resultado.
            // Quando ele termina, resultado guarda só o valor da última coluna
            resultado = ((tr * A[i][j]) + A[j][i]);
            printf("%lld ", resultado);
        }
        printf("\n");
    }

    return 0;
} /*char: um único caractere
 c
 char c = 'A';       // 1 byte, guarda UM caractere (na verdade o codigo ASCII,
 65) scanf("%c", &c);    // precisa do & para gravar nele printf("%c", c);
 char[]: um vetor de caracteres (a memória é sua)
 c
 char s[10] = "ola";     // reserva 10 bytes: 'o' 'l' 'a' '\0' e lixo/zeros
 char t[] = "ola";       // o tamanho e deduzido: 4 bytes (3 letras + '\0')
 scanf("%s", s);         // sem &, porque o nome do vetor ja e o endereco
 s[0] = 'O';             // pode modificar
 O vetor é a memória: os caracteres estão dentro dele.
 sizeof(s) dá o tamanho total do vetor (10).
 O nome s não pode ser reatribuído: s = "outra"; dá erro.
 char *: um ponteiro (guarda só um endereço)
 c
 char *p;                // ainda nao aponta para lugar nenhum (lixo!)
 p = s;                  // agora aponta para o vetor s
 p[0] = 'X';             // modifica s, porque p aponta para ele
 p++;                    // pode andar: agora aponta para s[1]
 p = t;                  // pode apontar para outro lugar
 Ele não guarda caracteres, só o endereço de onde eles estão.
 sizeof(p) dá o tamanho do ponteiro (8 em sistemas de 64 bits), e não o tamanho
 da string. Cuidado: scanf("%s", p) com p sem apontar para memória válida causa
 Segmentation fault. Antes é preciso fazer p = s; ou usar malloc. Comparação
     char c	char s[10]	char *p
 O que guarda	1 caractere	10 caracteres	1 endereço
 sizeof	1	10	8 (64 bits)
 Reatribuir (= outro)	sim (valor)	não	sim (aponta para outro lugar)
 Pode ler com scanf("%s") direto?	não (use %c)	sim	só se apontar para
 memória válida Literais de string: a pegadinha
 c
 char a[] = "ola";   // COPIA "ola" para o vetor a: pode modificar
 char *b = "ola";    // b aponta para o texto "ola" na area so de leitura

 a[0] = 'O';         // OK
 b[0] = 'O';         // comportamento indefinido: normalmente Segmentation fault

 Se for modificar a string, use char[]. Se char * apontar para um literal,
 trate-o como somente leitura (o ideal é const char *).

 Em parâmetros de função, são equivalentes
 c
 void f(char s[]);
 void f(char *s);    // exatamente a mesma coisa

 Quando um vetor é passado para uma função, ele “decai” para um ponteiro para o
 primeiro elemento. Por isso as funções contar_letras(char *texto) da sua lista
 funcionam com um char s[100] na main, e por isso a função não sabe o tamanho do
  vetor (por isso se usa o '\0' ou se passa o tamanho).

 Resumo
 char é um caractere.
 char[] é a caixa com os caracteres dentro.
 char * é a etiqueta que diz onde a caixa está.*/