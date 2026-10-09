#include <stdio.h>

int main(){
    int hi, mi, hf, mf;
    int totalH, totalM;

    scanf("%d%d%d%d", &hi, &mi, &hf, &mf);


    // tem que transformar agora pra minutos//
     int hora_minuto = (hi * 60) + mi;
     int hora_minuto2 = (hf *60) + mf;

     int diferenca = hora_minuto2 - hora_minuto;

     // agora o total tem que voltar as horas//

     totalH = diferenca / 60;
     totalM = diferenca % 60;

   printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n ",totalH, totalM);

    return 0;
}