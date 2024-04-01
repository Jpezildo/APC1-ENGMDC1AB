#include <stdio.h>
#include <math.h>
int main() { 
  float a, b, c;
  float delta =pow(b,2) - 4*a*c;

  printf("Entre com o valor de b: ");
  printf("Entre com o valor de c: ");
  printf("Entre com o valor de a: ");
  
 scanf("%f", &b);
  double potencia = pow(b, 2) * b;
  printf("A potencia de b eh %f\n", potencia);
   
  
  float resultado_sqrt = sqrt(delta);
  printf("Resultado da raiz quadrada de (delta): %f\n", resultado_sqrt);
 scanf("%f", &delta);
  printf("Resultado da raiz quadrada de delta: %f\n", resultado_sqrt);
      
  float x1 = (-b + sqrt(delta))/2*a;
  float x2 = (-b - sqrt(delta))/2*a;
  
  
  
  
  
  
  
  
  return 0;
}