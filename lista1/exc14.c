    #include <stdio.h>
     
    int main(){
        int qtdP;
        char tipo;
        double salarioB, mensalidade, mensalidadeT, salarioL, valorT;
        double percentual;
     
     
        // ENTRADA
    // qtd   tipo   valorT mensalidade
     
    scanf("%d %c %lf %lf", &qtdP, &tipo, &salarioB, &mensalidade);
     
    // SAÍDA
     
    if (tipo != 'A' && tipo != 'E') {
        printf("TIPO DE PLANO INVALIDO\n");
    }
    else {
        if (salarioB <= 1800.00) {
            if (tipo == 'E')
                percentual = 0.25;
            else
                if (tipo != 'E')
                    percentual = 0.30;
        }
     
        if (salarioB <= 5000.00) {
            if (tipo == 'E')
                percentual = 0.28;
            else
                if (tipo != 'E')
                    percentual = 0.35;
        }
     
        if (salarioB >= 5000.00) {
            if (tipo == 'E')
                percentual = 0.31;
            else
                if (tipo != 'E')
                    percentual = 0.40;
        }
     
        mensalidadeT = mensalidade * qtdP;
     
        valorT = percentual * mensalidadeT;
        salarioL = salarioB - valorT;
     
        if (salarioL <= 0.30 * salarioB) {
            printf("DESCONTO NAO AUTORIZADO");
        }
        else {
            if (tipo == 'E')
                printf("ENFERMARIA, %.2lf\n", valorT);
            else
                printf("APARTAMENTO, %.2lf\n", valorT);
        }
     
    }

    return 0;
    }