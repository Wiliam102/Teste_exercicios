#include <stdio.h>
#include <string.h>

int main() {
   char string[50];
   char stringInvertida[50];
   int i, j;
   
   printf("Informe uma mensagem para inverter:\n");
   scanf("%[^\n]", string); // ler todos os caracters ate o enter ser pressionado
   
    // Calcula o comprimento da string
    int comprimento = strlen(string);

    // Inverte a string
    for (i = 0, j = comprimento - 1; i < comprimento; i++, j--) {
        stringInvertida[i] = string[j];
        // esta pegando os caracters de tras para frente
    }
    stringInvertida[i] = '\0'; // Adiciona o caractere nulo ao final da string invertida

    // imprime na tela
    printf("String invertida: %s\n", stringInvertida);
   
   
    return 0;
}