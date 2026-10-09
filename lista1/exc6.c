#include <stdio.h>

int main(){
   long matricula;
   double provas[8], listas[5], trabalho, presenca;
   double soma;
   int i;

   while (1) {
    scanf("%ld", &matricula);
    if (matricula == -1) break;

    for (i = 0; i < 8; i++)
    scanf("%lf", &provas[i]);

    for (i = 0; i < 5; i++)
    scanf("%lf", &listas[i]);

    scanf("%lf", &trabalho);
    scanf("%lf", &presenca);

soma = 0;
    for (i = 0; i < 8; i++) soma += provas[i];
    double mp = soma / 8.0;

soma = 0;
    for (i = 0; i < 5; i++) soma += listas[i];
    double ml = soma / 5.0;


    double nf = 0.7 * mp + 0.15 * ml + 0.15 * trabalho;

    double cargaH = 0.75 * 128.0;

    int nota = (nf >= 6.0);
    int frequencia = presenca >= cargaH;

    if (nota && frequencia)
       printf("Matricula: %ld, Nota Final: %.2lf, Situacao Final: APROVADO\n", matricula, nf);
    else if (nota && !frequencia)
       printf("Matricula: %ld, Nota Final: %.2lf, Situacao Final: REPROVADO POR FREQUENCIA\n", matricula, nf);
    else if (!nota && frequencia)
       printf("Matricula: %ld, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA\n", matricula, nf);
    else 
       printf("Matricula: %ld, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA E POR FREQUENCIA\n", matricula, nf);
       


   }



    return 0;
}