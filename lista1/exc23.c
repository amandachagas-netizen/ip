#include <stdio.h>

int main(){
	int n, original, reverso, digito;
	
	scanf("%d", &n);
	
	original = n;   // guarda o valor de n antes do while mexer nele
	
	if (n > 99999 ) {
		printf ("NUMERO INVALIDO");
        printf("\n");
	} else {
		reverso = 0;
		   while ( n > 0) {
		   	digito = n % 10;
		   	reverso = reverso * 10 + digito;
		   	n = n/10;
		   }
		      if ( original == reverso) {   // compara com original, não com n
		      	printf("PALINDROMO");
		      } else { 
		      	printf("NAO PALINDROMO");
		      }
              printf("\n");
	}
		      
	return 0;
}