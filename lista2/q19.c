// while (scanf("%[^\n]", teste) != EOF}
#include <stdio.h>

int main() {
    char frase[100001];
    int i, k, dentro;
    char atual, anterior;

    while (scanf(" %[^\n]", frase) != EOF) {
        k = 0;
        dentro = 0;
        anterior = 0;

        for (i = 0; frase[i] != '\0'; i++) {
            if (i == 0 || frase[i - 1] == ' ') {
                atual = frase[i];
                if (atual >= 'A' && atual <= 'Z') {
                    atual = atual + ('a' - 'A');
                }

                if (atual == anterior) {
                    if (dentro == 0) {
                        k++;
                        dentro = 1;
                    }
                }
                else {
                    dentro = 0;
                }
                anterior = atual;
            }
        }
        printf("%d\n", k);
    }
    return 0;
}

// conta vogal com ponteiro

/*int contarVogais(char *frase) {
    int i;
    int cont = 0;
    for (i = 0; *(frase + i) != '\0'; i++) {
        if (*(frase + i) == 'A' || *(frase + i) == 'E' || *(frase + i) == 'I' ||
            *(frase + i) == 'O' || *(frase + i) == 'U' || *(frase + i) == 'a' ||
            *(frase + i) == 'e' || *(frase + i) == 'i' || *(frase + i) == 'o' ||
            *(frase + i) == 'u') {
            cont++;
            *(frase + i) = '*';
        }
    }
    return cont;
}

int main() {
    char entrada[10000];
    int total;

    scanf("%[^\n]", entrada);

    total = contarVogais(entrada);//troca rola aqui
    printf("%s\n", entrada);//ai imprime a nova entrada com base na funcao
    printf("Vogais encontradas: %d\n", total);

    return 0;
}

/*#include <stdio.h> //Processador de Linhas com eof

/*Escreva um programa que lê várias linhas de texto, uma por vez, até o fim da
entrada (EOF) — ou seja, você não sabe de antemão quantas linhas virão. Para
cada linha lida, o programa deve:

Contar quantos espaços em branco (' ') existem na linha.
Contar quantas palavras existem (dica: uma "palavra" é um trecho de caracteres
sem espaço; o número de palavras costuma ter uma relação direta com o número de
espaços — pensa em qual é essa relação, com cuidado nos casos de borda).
Substituir todo espaço por um hífen -.
Imprimir, para aquela linha: a linha já modificada, a contagem de espaços e a
contagem de palavras.*/

/*int contarEspacos(char *linha) {
    int i;
    int cont = 0;

    for (i = 0; *(linha + i) != '\0'; i++) {
        if (*(linha + i) == ' ') {
            cont++;
        }
    }
    return cont;
}
void substituirEspacos(char *linha) {
    int j;
    for (j = 0; *(linha + j) != '\0'; j++) {
        if (*(linha + j) == ' ') {
            *(linha + j) = '-';
        }
    }
}

int main() {
    char teste[100001];
    int espacoT;
    int numero;

    // le tudo menos o \n
    while (scanf("%[^\n]", teste) != EOF) {
        getchar(); // capturar e descartar esse \n que sobrou
        espacoT = contarEspacos(teste);
        numero = espacoT + 1;
        substituirEspacos(teste);
        printf("%s\n", teste);
        printf("Espacos: %d\n", espacoT);
        printf("Palavras: %d\n", numero);
    }

    return 0;
}*/