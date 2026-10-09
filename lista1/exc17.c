#include <stdio.h>

int main(){
    int m,n,s; // respectivamente, ao número de li-
//nhas, colunas e o número de diagonais acima e abaixo da diagonal principal
//O valor de s = 0 indica que
//somente a diagonal principal deve ser impressa.
    int i, j;

    scanf("%d%d%d", &m, &n, &s);

    for (i = 1; i <= m; i++) {
        for (j = 1; j <= n; j++){
            if ( i == j ) {
                printf ("(%2d,%2d)", i, j); // vai aparecer a diagonal principal//
            }
            else if (i - j <= s && j - i <= s) {
                printf("(%2d,%2d)", i,j);
            }    else {
                   printf(".......");
            }

        }
        printf("\n");

    }

    return 0;
}