#include <stdio.h>

int main(void) {
    int n1, n2, n3;
    
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    
    if (n1 < 0 || n1 > 9 || n2 < 0 || n2 > 9 || n3 < 0 || n3 > 9) {
        printf("DIGITO INVALIDO\n");
        return 0;
    }
    
    int numero = n1 * 100 + n2 * 10 + n3;
    long quadrado = (long)numero * numero;
    
    printf("%d, %ld\n", numero, quadrado);
    
    return 0;
}