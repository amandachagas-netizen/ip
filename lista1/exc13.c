#include <stdio.h>

int main(){
    double n1, n2, n3, temp;

    scanf( "%lf %lf %lf", &n1, &n2, &n3);

    if (n1 > n2) {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    
    if (n2 > n3) {
        temp = n2;
        n2 = n3;
        n3 = temp;
    }

    if (n1 > n2) {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }

    printf ("%.2lf, %.2lf, %.2lf\n", n1, n2, n3);




    return 0;
}