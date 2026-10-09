#include <stdio.h>

int main(){
    char stg[10001];
    int n,i;
    int cl, cv,cc; //cont de letra, vogal, cons
    int vogal = 0; //0 eh falso

    scanf("%d%*c", &n);

    while(n--){
        scanf("%[^\n]%*c", stg);
        cl = cv = cc = 0;
        i = 0;
        while(stg[i] != 0) {
            if(stg[i] >= 'A' && stg[i] <= 'Z'||
                stg[i] >= 'a' && stg[i] <= 'z' ){
                    cl++;
                    if(stg[i] == 'A' || stg[i] == 'E' || stg[i] == 'I' ||
                        stg[i] == 'O' || stg[i] == 'U'){
                            cv++;
                            vogal = 1;
                        }
                        if(stg[i] == 'a' || stg[i] == 'e' || stg[i] == 'i' ||
                            stg[i] == 'o' || stg[i] == 'u'){
                                cv++;
                                vogal =1;
                               
                            }
                            if(vogal==0){
                                cc++;
                            }
                        }
                        i++;
                        vogal = 0;         
                       }
                    printf("Letras = %d\n", cl);
                    printf("Vogais = %d\n", cv);
                    printf("Consoantes = %d\n", cc);
        }
    return 0;
}