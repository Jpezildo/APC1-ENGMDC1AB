#include <stdio.h>
#include <string.h> 

int main(){
char nome[20];

  printf("Entre com seu nome: ");
int deu_certo = scanf ("%[^\n]s", nome);

printf("Olá %s!\n", nome);

  char mensagem [30];
strcpy(mensagem, "Ola");
  printf("%s\n", mensagem);
strcat(mensagem, "Mundo!");
  printf("%s\n", mensagem);
int tamanho = strlen(mensagem);
printf("O tamanho da string eh %i\n", tamanho);
printf("As strings nome e mensagem são iguais? %i\n", strcmp(nome, mensagem));




















  return 0;
}