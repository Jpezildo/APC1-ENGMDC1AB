#include <stdio.h>
int main (){
  int idade;
  printf("Entre com a sua idade: ");
  int leu_certo = scanf("%i", &idade);
  if (idade < 16) {
    printf("Ainda não pode votar! \n");
  } else if (idade >= 18) {
    printf("O voto é obrigatório. \n");
  } else {
    printf("O voto é opcional.\n");
  }
  return 0;
}
  