#include <stdio.h>

  int main(){
    int n;
    scanf("%d", &n);
    
    if (n % 2 == 0) {
      printf("%d e par!\n", n);
    } else {
      printf("%d e impar\n", n);
    }
    return 0;
  }