#include <stdio.h>

int procura_caracter(
    char c[1],
    char str[500]) { // qnd cabar,ela me dá um nmr inteiro, e eh a partir
    // dos param. c e str q eu vou ter
    int j;
    for (j = 0; str[j] != '\0'; j++) {
        if (str[j] == *c) { // eh igual o valor do endereço c? ss? divou entao
            return j;       // posição exata onde achou
        }
    }
    return -1; // nn? então n achei, fui miope
}

int main() {
    int n = 0; // teste
    char str[500];
    int i;
    char c;

    scanf("%d", &n); // pula qualquer Enter/espaço esperando
    //(aqui não tem nada ainda). Lê os dígitos 4 e guarda em n. Para assim que
    // vê o \n (não é dígito).
    // tem q ler o enter, mas sem armazenar

    for (i = 0; i < n; i++) {
        scanf("%*c");    // leia,mas joga fora UM caracter da leitura anterior
        scanf("%c", &c); // pega geral, ate o espaço
        scanf("%*c");    // tirar o \n entre c e str
        scanf("%[^\n]", str); // ler tudinho menos \n, mas le tudo
        int r = procura_caracter(&c, str);

        if (r != -1) {
            printf("Caractere %c encontrado no indice %d da string.\n", c, r);
        }
        else {
            printf("Caractere %c nao encontrado.\n", c);
        }
    }

    return 0;
}