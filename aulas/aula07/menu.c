#include <stdio.h>

int main() {
  int opcao;

  printf("MENU PRINCIPAL\n");
  printf("1 - Consultar saldo\n");
  printf("2 - Recarregar saldo\n");
  printf("3 -   Ligações Recebidas\n");
  printf("4 - Ligações Feitas \n");
  printf("0 - Sair\n");
  int leu_certo = scanf("%i", &opcao);

  switch (opcao) {
  case 1:
    printf(" Seu saldo é de R$ 10.00\n");
    break;
  case 2: {
    float valor;
    printf("Entre com o valor de recarga");
    leu_certo = scanf("%f", &valor);
    break;
  }
  case 3: {
    printf("As 5 ultimas ligaçoes recebidas\n");
    printf("9999-9999\n");
    printf("8888-8888\n");
    printf("6666-6666\n");
    break;
  }
  case 4: {
    printf("As 5 ultimas ligaçoes feitas\n");
    printf("9999-9999\n");
    printf("8888-8888\n");
    printf("6666-6666\n");
    break;
  }

    {
    case 0: {
      printf("Bye Bye\n");
      break;
    }
    default:
      printf("Opcao invalida. Tente novamente\n");
    }
    return 0;
  }
