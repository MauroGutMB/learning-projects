#include <stdio.h>

int main(){

  float pop_A = 5000000, pop_B = 7000000;
  float cresc_A = 0.03, cresc_B = 0.02;
  int contador = 0;

  while(pop_B > pop_A){
    pop_A = pop_A + (pop_A * cresc_A);
    pop_B = pop_B + (pop_B * cresc_B);
    contador++;

    printf("%.2f\n", pop_A);
    printf("%.2f\n", pop_B);
    printf("\n");
  }

  printf("Total de anos que a populaação A levou para superar a população B: %i anos", contador);


  printf("\n\n%.0f --> A", pop_A);
  printf("\n%.0f --> B", pop_B);
}


/* 
 
-- INFORMAÇÕES --

POPULAÇÃO 'A' = 500000 HAB, NAT 3% ao ano

POPULAÇÃO 'B' = 700000 HAB, NAT 2% ao ano


 */
