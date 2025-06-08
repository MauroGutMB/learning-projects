#include <stdio.h>

int main(){

  int n; // n diretores
  int k; // k tempo em minutos
  int nMins = 0;
  int duracao = 0;
  int duracaoFinal;
  int intervalos;

  scanf("%i", &n);
  scanf("%i", &k);

  if(k < n){
    return 1;
  }

  if(n < 1 || n > 100){
    return 1;
  }

  if(k < 1 || k > 1000){
    return 1;
  }

  intervalos = n - 1; 
  if(n == 1)intervalos = 0, nMins++;
  duracaoFinal = k - intervalos;
  duracao = n; 

  while(duracao < duracaoFinal){
    duracao += n;
    nMins++;
  }

  printf("%i", nMins);

  return 0;
}
