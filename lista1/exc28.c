#include <stdio.h>

int main (){
    double Nr, No;
    int Ni;
    int k = 1;
    int min, div;
     No = Nr;
    scanf("%lf", &Nr);

    while(1){
        Ni = Nr;
        if (Ni == Nr) break;
        Nr *= 10;printf("%lf/%d\n",  Nr, k);
        k *= 10;
    }


    while(1){   
    if (Ni<k) min = Ni;
    else min = k;

    for (div = min; div>1; div--){
        if(Ni%div == 0 && k%div == 0){
            Ni/=div;
            k/=div;
            break;
        }
       }
       if(div == 1) break;
    }
printf("%d/%d\n", Ni, k);
    return 0;
}