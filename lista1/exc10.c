#include <stdio.h>

int main(){
    int n;
    int i;
    int ant, atual;
    int comp, maior;

    
    scanf ("%d", &n);

    comp = 1;
    maior = 1;

        scanf("%d", &ant);
            for (i = 1; i < n; i++) {
                        scanf("%d", &atual);
                                if (atual > ant) {
            comp++;
            if (comp > maior) {
                maior = comp;
            }
        } else {
            comp = 1;
        }
                ant= atual;
    }


printf("O comprimento do segmento crescente maximo e: %d\n", maior);
    return 0;
}