#include <stdio.h>

int main (){
    int N; //nmr de linhas
    char palavra[12];
    int i, j,k;
    char one []= "one";
    char two []= "two";
    char three[]= "three";
    int tamanho = 0;
    int difone = 0;//pra ver a dif entre one two
    int diftwo = 0;

    scanf("%d", &N);

    for(j=0;j<N;j++){
        scanf("%s", palavra);
        for(i=0;palavra[i] != '\0';i++){
            tamanho = i + 1; //+1 pq o tamanho 3 so com i seria 2
        }
        if(tamanho == 5){
            printf("3\n");
        } 
        else if(tamanho==3){
            for(k=0;k<tamanho;k++){
                if(palavra[k] != one[k]){
                    difone++;
                }
                if(palavra[k] != two[k]){
                    diftwo++; //essas 2 rodam ao msm tempo e vao comparando
                }
            }
            if(difone<diftwo){//ent compara, tem mais coisa errada numa? ent eh a outra
                printf("1\n");
            }else{
                printf("2\n");
            }
         
        }
        tamanho = 0;
        difone = 0;
        diftwo = 0;
    }
    return 0;
}