
#include <stdio.h>

int main()
{
    int indice = 13;
    int soma = 0;
    int k = 0;
    
    while(k<indice){
        k++;
        soma += k;
    }
    printf("O valor final da soma eh %d", soma);
    return 0;
}