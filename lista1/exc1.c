#include <stdio.h>

int main(void)
{
    int n;
    int i;
    int publico;
    double pPopular, pGeral, pArquibancada, pCadeiras;
    double renda;

    scanf("%d", &n);

    i = 1;

    while (i <= n)
    {
        scanf("%d %lf %lf %lf %lf",
              &publico,
              &pPopular,
              &pGeral,
              &pArquibancada,
              &pCadeiras);

        renda = publico * pPopular / 100.0
              + publico * pGeral / 100.0 * 5.0
              + publico * pArquibancada / 100.0 * 10.0
              + publico * pCadeiras / 100.0 * 20.0;

        printf("A RENDA DO JOGO N. %d E = %.2f\n", i, renda);

        i = i + 1;
    }

    return 0;
}