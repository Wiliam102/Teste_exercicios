#include <stdio.h>

int main()
{
int valor = 0;
   int a = 0;
   int b = 1;
   int proximo = 0;
   int pertence = 0;
   
   // entrada do usuario
   printf("Informe o valor de entrada:\n");
   scanf("%d", &valor);
   
   // verifica caso os valores de entrada seja 0 ou 1
   if ( valor == 0 || valor == 1) {
        printf("O numero %d pertence a sequencia de Fibonacci.\n", valor);
   }
   // calcula a sequencia
   else{
       while(proximo < valor){
           proximo = a + b;
           a = b;
           b = proximo;
           // verificando se o valor digitado pertence a sequencia
           if(proximo == valor){
              pertence = 1;
           }
           
       }
       if(pertence == 1){
           printf("O valor %d pertence a sequencia de Fibonacci. \n", valor);
       }
       else{
           printf("O valor %d não pertence a sequencia de Fibonacci. \n", valor);
       }
   }
    
    return 0;
}