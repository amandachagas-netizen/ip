#include <stdio.h>

int main() {
    char final[105]; // saida certinha
    int i, j, k = 0; // pros for // m único laço que, a cada volta, pega uma
                     // letra de stg1
    // (se existir) e uma letra de stg2 (se existir), nessa ordem
    int n; // nmr de testes

    scanf("%d", &n);

    for (i = 0; i < n; i++) // while( n --)
    {
        char stg1[51] = {0}; //  eu smp to contando além dos caracteres, certo?
        char stg2[51] = {0}; // stg eh aspas duplas e char eh simples, pra
        //'zerar' as stg eh com {}

        scanf("%s", stg1);
        scanf("%s", stg2);
        k = 0; // cara, qnd eu lembro de zerar o trem, ele vem aqui???
        for (j = 0; stg1[j] || stg2[j] != 0;
             j++) { // to  olhando a letra número j
            // de cada string de entrada
            if (stg1[j] != 0) {
                final[k] = stg1[j]; // como eu vou ler um de cada vez? AAAA
                k++; //[k] = quantas letras eu já escrevi na saída até agora
            }
            if (stg2[j] != 0) {
                final[k] = stg2[j];
                k++; // como o contator é o mesmo, ele organiza em ordem,
                     // primeiros
                // os na posiçao 0,depois 1, etc e com isso ele organiza na
                // variavel final
            }
        }
        final[k] = '\0'; // se n botar, ele ainda imprime uns trem aleatorio
        printf("%s\n", final);
    }
    return 0;
}