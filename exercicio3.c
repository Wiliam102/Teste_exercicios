
#include <stdio.h>

#define NUM_DIAS 30 // mes

// strutura para armazenar dia e valor do faturamento
typedef struct{
   int dia;
   float valor;
}FaturamentoPorDia;

int main()
{
   
    // dados 
    FaturamentoPorDia faturamento[NUM_DIAS] = {
         {1, 22174.1664}, {2, 24537.6698}, {3, 26139.6134}, {4, 0.0}, {5, 0.0}, 
        {6, 26742.6612}, {7, 0.0}, {8, 42889.2258}, {9, 46251.174}, {10, 11191.4722}, 
        {11, 0.0}, {12, 0.0}, {13, 3847.4823}, {14, 373.7838}, {15, 2659.7563}, 
        {16, 48924.2448}, {17, 18419.2614}, {18, 0.0}, {19, 0.0}, {20, 35240.1826}, 
        {21, 43829.1667}, {22, 18235.6852}, {23, 4355.0662}, {24, 13327.1025}, {25, 0.0}, 
        {26, 0.0}, {27, 25681.8318}, {28, 1718.1221}, {29, 13220.495}, {30, 8414.61}
    };
    float menorF = faturamento[0].valor;
    float maiorF = faturamento[0].valor;
    float soma = 0;
    float media = 0;
    int dias_com_faturamento = 0;
    int dias_acima_media = 0;
    
    // for para as verificacoes  e caculos
    for(int i=0; i< NUM_DIAS; i++){
        // ignora valores iguais a zero na verificacao
        if(faturamento[i].valor > 0){
            // compara se o valor eh menor que o atual
           if(faturamento[i].valor < menorF){
               menorF = faturamento[i].valor;
           }
           // compara se o valor eh maior que o atual
            if(faturamento[i].valor > maiorF){
               maiorF = faturamento[i].valor;
           }
           // calculando valor total de faturamento
           soma+= faturamento[i].valor;
           // incrementando dias com faturamento para media
           dias_com_faturamento++;
           
        }
        
    }
    // calculo media
    media = soma / dias_com_faturamento;
    
    // calculo dias com faturamento acima da media
    for(int i =0; i<NUM_DIAS; i++){
        if(faturamento[i].valor > media){
            dias_acima_media++;
        }
    }
     // Exibe os resultados
    printf("Menor valor de faturamento ocorrido em um dia do mês: %.2f\n", menorF);
    printf("Maior valor de faturamento ocorrido em um dia do mês: %.2f\n", maiorF);
    printf("Número de dias no mês com faturamento acima da média mensal: %d\n", dias_acima_media);
    
   
    return 0;
}