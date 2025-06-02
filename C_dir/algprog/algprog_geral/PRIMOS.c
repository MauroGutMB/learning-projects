#include <stdio.h>

int main(){

  int min, max, num, div, contador_de_primos = 0;      // define o valor mínimo, máximo, a quantidade de iterações e um contador de númeoros primos

  printf("Digite o valor inferior --> ");
  scanf("%i", &min);
  // while(getchar() != '\n'){}    // limpar caractere de nova linha que possa ter ficado no buffer (caso dê problema)

  printf("Digite o valor máximo --> ");
  scanf("%i", &max);
  // while(getchar() != '\n'){}    // limpar caractere de nova linha que possa ter ficado no buffer (caso dê problema)

  for (num = min; num <= max; num++){   //loop principal pra printar os números primos

    for(div = 2; div < num; div++){  // loop interno pra verificar a divisão dos números (caso não sejam primos, breaka o loop interno e passa pra proxima iteração)
    // verifica se i1 tem algum divisor além de 1 e ele mesmo (propriedade dos números primos)
    // se for divisível por qualquer i2 (de 2 até i1-1), ele não é primo
      if(num % div == 0)break;
    }

    if(div == num){          // se não encontrou nenhum divisor (loop chegou até o fim), então i1 é primo
      printf("%i ", num);
      contador_de_primos++;
    }
  }

  printf("\nForam encontrados %i primos.", contador_de_primos);

  return 0;
}
