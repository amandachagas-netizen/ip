#include <stdio.h>

int main(){
    int m,k,xi,x;

    scanf("%d", &m);

    for( k = 1; k <= m; k++){
        
     xi = k*k - k + 1;

     for(x = 1; x < k; x++){
        printf("%d", xi);

    if ( x < k-1)
      printf ("+");
     xi += 2;
     }
}
   printf("\n");

    return 0;
}