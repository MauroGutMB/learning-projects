#include <stdio.h>

int main(){

  float aporte_inicial, aporte_mensal, capital_investido = 0, renda = 0, juros = 0, juros_acumulado = 0;
  int meses;

  printf("Digite o valor do aporte inicial --> ");
  scanf("%f", &aporte_inicial);

  printf("Digite o valor do aporte mensal --> ");
  scanf("%f", &aporte_mensal);

  printf("Por quantos meses o dinheiro ficará aplicado? --> ");
  scanf("%i", &meses);

  renda = aporte_inicial;
  capital_investido += aporte_inicial;

  for(int i = 1; i <= meses; i++){
    printf("\n");
    capital_investido += aporte_mensal;
    juros = (renda * 0.05);
    renda += aporte_mensal;
    juros_acumulado += juros;
    renda = renda + juros;
    printf("Valor do mês %i: R$%.2f\n", i, renda);
    printf("O capital investido foi de: R$%.2f\n", capital_investido);
    printf("Juros: R$%.2f\n", juros);
    printf("Juros acumulado: R$%.2f\n", juros_acumulado);
  }

}
