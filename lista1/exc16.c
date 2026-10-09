#include <stdio.h>

int main() {  
  int n;
  int binario;
  
  
  scanf("%d", &n);
  
   
  if (n < 0 || n > 255 ) {
  printf("Numero invalido!"); 
  } else {
  	for (binario = 128; binario >= 1; binario = binario/2) {
  		printf ("%d", (n/binario) % 2);
    
  	      }
        printf("\n");
  }	
   return 0;
}