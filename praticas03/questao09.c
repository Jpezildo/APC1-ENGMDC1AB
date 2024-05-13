#include <stdio.h>
int main() {
int numero;
int maior = 0;
  int menor = 0;
int numero_eh_valido = 0;
  
  while(!numero_eh_valido);
  printf("Entre com um número. 0 vai parar:" );
int leu_certo = scanf("%i", &numero);

  numero_eh_valido = leu_certo && numero == 0;
  if(maior < numero) {
menor = numero;
}
if (menor > numero) {
  menor = numero;
}
 
printf("O maior numero eh %i e o menor eh %i\n", maior, menor);
  















































return 0;

}