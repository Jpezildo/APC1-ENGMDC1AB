#include <stdio.h>
#include <math.h>
int main() {
    float numero1;

    printf("Entre com o valor do numero1: ");
    float deu_certo = scanf("%f", &numero1);
    double potencia = pow(1024, 3) * numero1;
    printf("A potencia no numero1 eh %f\n", potencia);
    return 0;
}







