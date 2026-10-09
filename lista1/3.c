#include <stdio.h>

int main(){
    int n1,n2,n3,n4,n5;
    int maior, menor;
    int cresc, decresc; //volta o cao arrependido//

    scanf("%d%d%d%d%d", &n1, &n2, &n3,&n4, &n5);

    menor = n1; //pra ordem crescente//
    if (n2<menor) menor = n2;
    if (n3<menor) menor = n3;
    if (n4<menor) menor = n4;
    if (n5<menor) menor = n5;

    maior = n1;
    if (n2>maior) maior = n2;
    if (n3>maior) maior = n3;
    if (n4>maior) maior = n4;
    if (n5>maior) maior = n5;
    // cabei de ver q vou precisar de mais variaveis pq pensa
    // blz eu to falando pra ele organizar o maior e o menor//
    // mas tem q organizar  tbm qnd for cresc e decresc e n so desord.

    cresc = (n1 < n2)  && (n2 < n3) && (n3 < n4) && (n4 < n5);
    decresc = (n1 > n2)  && (n2 > n3) && (n3 > n4) && (n4 > n5);

    if (cresc) {    
        printf ("MENOR: %d, MAIOR: %d\n", menor, maior);
        printf("ORDENADO CRESCENTE\n");
    } 

   else if (decresc) { 
        printf ("MENOR: %d, MAIOR: %d\n", menor, maior);
        printf("ORDENADO DECRESCENTE\n");
    }

     else { 
        printf ("MENOR: %d, MAIOR: %d\n", menor, maior);
        printf("DESORDENADO\n");
    }

    return 0;
}