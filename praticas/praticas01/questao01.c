#include <stdio.h>

int main(){

float A1 = 0.0f;
float A2 = 0.0f;

printf("Entre com a nota A1:");
  int deu_certo = scanf("%f", &A1);
  
printf("Entre com a nota A2:");
  deu_certo = scanf("%f", &A2);
  
  printf("--------------------------------\n");
  printf("           Média Final        \n");
  printf("--------------------------------\n");





  
  float media = 0.4*A1 + 0.6*A2;
  printf("%10.2f\n", media);
return 0;  
}