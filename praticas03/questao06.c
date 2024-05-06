# include <stdio.h>

int main() {
  int numero;

  printf( "Entre com um numero de 1 a 100: ");
  int leu_certo = scanf("%i", &numero);

  if (leu_certo && numero > 0 && numero < 101 ){
   printf ("Os multiplos de %i entre 1 e 100\n", numero);

   /*for(int i = 1; i < 101; i++) {
     if( i % numero == 0); {  */
    for (int i = numero; i < 101; i = i + numero) {
    printf( "%i, ", i);
     }
    printf("\n");
  } else {
printf("Numero Invalido. Tente novamente.\n");
  }
    return 0;
  }












































  