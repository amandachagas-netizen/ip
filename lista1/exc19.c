#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d%d%d", &a, &b, &c);

    long long int mmc = 1;

    while (a != 1 || b != 1 || c != 1 ) { // enquanto a ou b ou c forem diferentes de um, o laço continua//
        int primo = 2; //pq 2 é o menor primo//
    
        while (!(a % primo == 0 || b % primo == 0 || c % primo == 0)) { // enquanto as divisoes pelo 2 n derem resto 0// 
            primo++; 
        } // vai para o proximo primo ate achar um divisor cabivel//
        printf ("%d %d %d :%d", a,b,c,primo);
        printf("\n");
    
        
        mmc *= primo; // a cada divisor que eu achar, ele vai entrar no mmc e multiplicar por ele//
        
        if (a % primo == 0) a /= primo; // se a fosse tipo 6: 6/2 = 3, a iria passar a valer 3//
        if (b % primo == 0) b /= primo;
        if (c % primo == 0) c /= primo;
    
}

    

    printf("MMC: %lld", mmc);
    printf("\n");



    return 0;
}