/*
 *
 * Teste do Copilot
 *

8.   Defina uma estrutura que irá representar bandas de música. 
Essa estrutura deve ter o nome da banda, que tipo de música ela toca,
o número de integrantes e em que posição do ranking essa banda está dentre as suas 5 bandas favoritas.
 
9.   Crie um looping para preencher as 5 estruturas de bandas criadas no exemplo passado.
Após criar e preencher, exiba todas as informações das bandas/estruturas. 
 
10.  Crie uma função que peça ao usuário um número de 1 até 5. Em seguida, seu programa deve exibir 
informações da banda cuja posição no seu ranking é a que foi solicitada pelo usuário.
*/

#include <stdio.h>

// Função para exibir informações da banda com base na posição do Ranking

typedef struct {
    char nome[50];
    char tipoMusica[30];
    int numeroIntegrantes;
    int posicaoRanking;
} Banda;

void exibirBandaPorRanking(int posicao, Banda bandas[], int tamanho);

int main(){

  Banda bandas[5];

  // Preenchendo as estruturas de bandas

  for (int i = 0; i < 5; i++) {
      printf("Informe o nome da banda %d: ", i + 1);
      scanf(" %[^\n]", bandas[i].nome);
      printf("Informe o tipo de música da banda %d: ", i + 1);
      scanf(" %[^\n]", bandas[i].tipoMusica);
      printf("Informe o número de integrantes da banda %d: ", i + 1);
      scanf("%d", &bandas[i].numeroIntegrantes);
      bandas[i].posicaoRanking = i + 1; // A posição é definida pelo índice do loop
  }

  // Exibindo as informações das bandas
  
  printf("\nInformações das bandas:\n");
  for (int i = 0; i < 5; i++) {
      printf("\nBanda %d:\n", i + 1);
      printf("Nome: %s\n", bandas[i].nome);
      printf("Tipo de Música: %s\n", bandas[i].tipoMusica);
      printf("Número de Integrantes: %d\n", bandas[i].numeroIntegrantes);
      printf("Posição no Ranking: %d\n", bandas[i].posicaoRanking);
  }

  // Solicitando ao usuário uma posição do ranking e exibindo a banda correspondente

  int posicao;
  printf("\nInforme uma posição do ranking (1 a 5): ");
  scanf("%d", &posicao);
  exibirBandaPorRanking(posicao, bandas, 5);

  return 0;
}

void exibirBandaPorRanking(int posicao, Banda bandas[], int tamanho) {
    if (posicao < 1 || posicao > tamanho) {
        printf("Posição inválida! Informe um número entre 1 e %d.\n", tamanho);
        return;
    }
    printf("\nInformações da banda na posição %d:\n", posicao);
    printf("Nome: %s\n", bandas[posicao - 1].nome);
    printf("Tipo de Música: %s\n", bandas[posicao - 1].tipoMusica);
    printf("Número de Integrantes: %d\n", bandas[posicao - 1].numeroIntegrantes);
}
