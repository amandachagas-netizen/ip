#include <stdio.h>
int A[5];
int vet_maior(int V[], int n){ // n eh variavel local ao vet_maior
    int i;
    int M = V[0]; //o maior elemento na primeira analise será o primeiro
    // entao a contagem do for começa no 1 pq tem q ler o primeiro elemento
    //e dps comparar com o anterior e aí mudar oq M recebe

    for(i=1; i<n; i++){
        if (V[i] > M) M = V[i]; //se o maior valor estiver em V[i], M recebe tal valor
    }
    return M; // pq n pode ser dentro do for? oq rolaria?
}


int main(){
    int A[5] = { 1,2,3,7,9};
    int X;
    X = vet_maior(A, 5);
    printf("%d\n", X);
    return 0;

}