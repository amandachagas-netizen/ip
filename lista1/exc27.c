 #include <stdio.h>

int main(){
    int i;
    float a, b, c, temp;

    scanf("%d", &i);
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    // Ordena a, b, c em ordem crescente (bubble sort simples)
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    // Agora: a = menor, b = meio, c = maior

    if (i == 1) {
        // ordem crescente
        printf("%.2f %.2f %.2f\n", a, b, c);
    }
    else if (i == 2) {
        // ordem decrescente
        printf("%.2f %.2f %.2f\n", c, b, a);
    }
    else if (i == 3) {
        // maior no meio, menor por último: meio, maior, menor
        printf("%.2f %.2f %.2f\n", b, c, a);
    }

    return 0;
}