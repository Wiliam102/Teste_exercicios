#include <stdio.h>

int main() {
    // Valores de faturamento por estado
    double faturamentoSP = 67836.43;
    double faturamentoRJ = 36678.66;
    double faturamentoMG = 29229.88;
    double faturamentoES = 27165.48;
    double faturamentoOutros = 19849.53;

    // Calcula o valor total do faturamento
    double totalFaturamento = faturamentoSP + faturamentoRJ + faturamentoMG + faturamentoES + faturamentoOutros;

    // Calcula o percentual de representação de cada estado
    double percentualSP = (faturamentoSP / totalFaturamento) * 100;
    double percentualRJ = (faturamentoRJ / totalFaturamento) * 100;
    double percentualMG = (faturamentoMG / totalFaturamento) * 100;
    double percentualES = (faturamentoES / totalFaturamento) * 100;
    double percentualOutros = (faturamentoOutros / totalFaturamento) * 100;

    // Imprime os resultados
    printf("Percentual de representação de SP: %.2f%%\n", percentualSP);
    printf("Percentual de representação de RJ: %.2f%%\n", percentualRJ);
    printf("Percentual de representação de MG: %.2f%%\n", percentualMG);
    printf("Percentual de representação de ES: %.2f%%\n", percentualES);
    printf("Percentual de representação de Outros: %.2f%%\n", percentualOutros);

    return 0;
}