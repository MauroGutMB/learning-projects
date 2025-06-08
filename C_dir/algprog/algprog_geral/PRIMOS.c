#include <stdio.h>

int main(){

  int min, max, num, div, contador_de_primos = 0;

  printf("Digite o valor inferior --> ");
  scanf("%i", &min);

  printf("Digite o valor máximo --> ");
  scanf("%i", &max);

  for (num = min; num <= max; num++){

    for(div = 2; div < num; div++){
      if(num % div == 0)break;
    }

    if(div == num){
      printf("%i ", num);
      contador_de_primos++;
    }
  }

  printf("\nForam encontrados %i primos.", contador_de_primos);

  return 0;
}
