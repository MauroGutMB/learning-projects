#include <stdio.h>

int main(){

  int N;
  int contracoes = 0;

  scanf("%i", &N);

  int Li[N];

  if(N <= 1 || N > 106) return 0;

  for(int i = 0; i < N; i++){
    scanf("%i", &Li[i]);
  }


  for(int i = 0, j = N-1; i < N; i++, j--){
    if(Li[i] != Li[j]){

      int soma = Li[i] + Li[j];

      Li[i] = soma;
      Li[j] = soma;

      contracoes++;

    }
  }

  // printf("\n\n");
  // for(int i = 0; i < N; i++){
  //   printf("%i", Li[i]);
  //   if(i < N-1){
  //     printf(" -> ");
  //   }
  // }
  // printf("\n\n");

  // printf("\nContrações => %i", contracoes);
  printf("%i", contracoes);


  return 0;
}
