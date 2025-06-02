// Dada uma seqüência de n números reais, determinar os números que compõem a seqüência e o número de vezes que cada um deles ocorre na mesma. 
// Exemplo: n = 8 Seqüência: -1.7,  3.0,  0.0,  1.5,  0.0, -1.7,  2.3, -1,7
/*
Saída: -1.7 ocorre 3 vezes
        3.0 ocorre 1 vez
        0.0 ocorre 2 vezes
        1.5 ocorre 1 vez
        2.3 ocorre 1 vez
*/

#include <stdio.h>

/*
  ✅ Vetor pra armazenar n números inseridos
  ✅ Organizar em ordem crescente pra ficar mais fácil a verificação de um número que já ocorreu
  ✅ Contar números diferentes e criar um novo vetor apenas com os números diferentes
  ✅ Fazer uma iteração do vetor dos números que ocorreram com o vetor organizado em ordem crescente pra contar quantas vezes cada número ocorreu
  ✅ Criar um vetor do tamanho dos números que ocorreram apenas pra fazer as contas das ocorrencias
*/

int main(){

  int n;

  printf("Digite o tamanho do vetor --> ");
  scanf("%i", &n);

  float vetor[n];
  int tamVetor = sizeof(vetor) / sizeof(vetor[0]);

  for(int i = 0; i < tamVetor; i++){
    printf("Digite o valor do n°%i --> ", i + 1);
    scanf("%f", &vetor[i]);
  }

  // organiza o vetor em ordem crescente
  for(int i = 0; i < tamVetor; i++){
    for(int i2 = 0; i2 < tamVetor; i2++){
      if(vetor[i] < vetor[i2]){
        float t = vetor[i];
        vetor[i] = vetor[i2];
        vetor[i2] = t;
      }
    }
  }

  // conta quantos númeoros diferentes o vetor possui
  int diferentes = 0;
  for(int i = 0; i < tamVetor; i++){
    if(vetor[i] != vetor[i + 1]){
      diferentes++;
    }
  }

  // cria um vetor novo pra armazenar os valores diferentes
  float vetorApareceram[diferentes];
  int tamAP = sizeof(vetorApareceram) / sizeof(vetorApareceram[0]);
  
  // armazena cada valor diferente no vetor novo
  int indiceApareceram = 0;
  for(int i = 0; i < tamVetor; i++){
    if(vetor[i] != vetor[i + 1]){
      vetorApareceram[indiceApareceram] = vetor[i];
      indiceApareceram++;
    }
  }

  // for(int i = 0; i < tamVetor; i++){
  //   printf("%.1f ", vetor[i]);
  // }
  // printf("\n");
  // for(int i = 0; i < tamAP; i++){
  //   printf("%.1f ", vetorApareceram[i]);
  // }


  // cria um terceiro vetor pra armazenar apenas as contagens dos numeros
  int vetorContagem[diferentes];

  // faz o armazenamento da contagem de acordo com o indice
  // primeiro for: Vetor das ocorrencias
  // segundo for: vetor normal 
  // ele analiza cada ocorrencia de acordo com a igualdade do primeiro for com o segundo, então
  // conta e armazena o valor no vetor da contagem
  int indiceContagem = 0;
  for(int i = 0; i < tamAP; i++){

    int contador = 0;

    for(int i2 = 0; i2 < tamVetor; i2++){

      if(vetorApareceram[i] == vetor[i2]){
        contador++;
      }
    }

    vetorContagem[indiceContagem] = contador;
    indiceContagem++;
  }

  // printf("\n");
  // for(int i = 0; i < tamAP; i++){
  //   printf("%i ", vetorContagem[i]);
  // }

  printf("\n\n");
  printf("Vetor das ocorrências: ");
  for(int i = 0; i < tamAP; i++){
    printf("%.2f  ", vetorApareceram[i]);
  }
  printf("\n");
  printf("Ocorrência dos números:\n");
  for(int i = 0; i < tamAP; i++){
    if(vetorContagem[i] == 1){
      printf("%.2f Ocorre %i vez\n", vetorApareceram[i], vetorContagem[i]);
    } else{
      printf("%.2f Ocorre %i vezes\n", vetorApareceram[i], vetorContagem[i]);
    }
  }

  return 0;
}
