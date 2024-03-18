#include <stdio.h>

int main() {
printf("--------------------------------\n");
printf("            NOTA LEGAL        \n");
printf("--------------------------------\n");
printf("ITEM           QTD      PRECO   \n");
//printf("Banana prata     1      15,00   \n");
//printf("Laranja       10      20,00   \n");
//printf("Maca Fuji     6      30,00   \n");

  char item[31] = "Banana prata";
  int qtde = 1; 
  float preco = 3.00f; 

 printf("%14s %03i %11.2f\n", item, qtde, preco);

  char item2[31]= "Laranja Bahia";
  qtde=10;
  preco=20.0f;

   printf("%14s %03i %11.2f\n",item2, qtde, preco);

  char item3[31]= "Maca Fuji";
  qtde= 6;
  preco = 30.0f;

  printf("%-14s %03i %11.2f\n", item3, qtde, preco);

  printf("-------------------------------------\n");
  printf("TOTAL                         %11.2f\n",65.0f);
 


  
  
  return 0; 
}