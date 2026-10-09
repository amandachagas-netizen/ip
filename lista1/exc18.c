#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	
	while (t > 0) {
		int a, b;
		scanf("%d %d", &a, &b);
		
		int centenaA = a / 100;
		int dezenaA = (a / 10) % 10;
		int unidadeA = a % 10;
		
		int centenaB = b / 100;
		int dezenaB = (b / 10) % 10;
		int unidadeB = b % 10;
		
		int invertidoA = unidadeA * 100 + dezenaA * 10 + centenaA;
		int invertidoB = unidadeB * 100 + dezenaB * 10 + centenaB;
		
		if (invertidoA > invertidoB) {
			printf("%d\n", invertidoA);
		} else {
			printf("%d\n", invertidoB);
		}
		
		t--;
	}
	
	return 0;
}