/*  Uma loja tem tem uma política de descontos de acordo com o valor da compra do cliente.
 Os descontos começam acima dos R$500. A cada 100 reais acima dos R$500,00 o cliente ganha 1% de desconto cumulativo até 25%. 
 Por exemplo: R$500 = 1% || R$600,00 = 2% … etc…
 Faça um programa que exiba essa tabela de descontos no seguinte formato:  
 Valordacompra – porcentagem de desconto – valor final
*/

// acho que entendi a questão errado.

#include <stdio.h>

int main(){

  float valor_compra = 500;
  float desconto_valor = 1;
  int desconto = 1;

  printf("Valor da Compra --- Porcentagem do desconto ---   Valor final\n");
  while(desconto <= 25){
    float desconto_atual = desconto_valor / 100;
    float valor_atual = valor_compra - (valor_compra * desconto_atual);

    printf(" %10.2fR$   |||    %10i%%          ||| %10.2fR$    \n", valor_compra, desconto, valor_atual);

    valor_compra += 100;
    desconto++;
    desconto_valor++;
  }

  return 0;
}

// #include <stdio.h>
//
// int main(){
//
//   float compra;
//   float desconto_porc;
//   float desconto;
//
//   printf("Insira o valor da compra --> ");
//   scanf("%f", &compra);
//
//   if(compra < 500){
//
//     desconto_porc = 0;
//
//   } else {
//
//     float verif_desconto = compra - 499;
//     desconto_porc = 0; 
//
//     while(verif_desconto > 0 && desconto_porc < 25){
//       verif_desconto -= 100;
//       desconto_porc++;
//     }
//
//     desconto = desconto_porc / 100;
//
//   }
//
//   printf("Valor da compraa -  %% desconto -  valor final\n");
//   printf("    %.2fR$     -      %.0f%%     -    %.2fR$", compra, desconto_porc, (compra - (compra * desconto)) );
//
//   return 0;
// }
