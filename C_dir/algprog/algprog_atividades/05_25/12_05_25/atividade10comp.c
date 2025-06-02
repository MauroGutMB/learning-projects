#include <stdio.h>

// Dada uma seqüência de n números reais, determinar os números que compõem a seqüência e o número de vezes que cada um deles ocorre na mesma. 
// Exemplo: n = 8 Seqüência: -1.7,  3.0,  0.0,  1.5,  0.0, -1.7,  2.3, -1,7

int pertence(float x, float vetor[], int n);

int main(){

  // Tamanho do vetor incial e contador de numeros diferentes
  int n;
  int n_diferentes = 0;

  printf("Defina n --> ");
  scanf("%i", &n);

  // Inicialização dos 3 vetores do tamanho n
  float vetor[n];
  float vetorDiferentes[n];
  int vetorOcorrencias[n];

  // Leitura dos valores, verificação se já pertence ao vetor e atribuição do valor no respectivo vetor
  for(int i = 0; i < n; i++){
    float valor;

    printf("Defina n°%i --> ", i+1);
    scanf("%f", &valor);

    int pertence_ao_vetor = pertence(valor, vetor, n);

    vetor[i] = valor;

    if(!pertence_ao_vetor){
      vetorDiferentes[n_diferentes] = valor;
      n_diferentes++;
    }

  }

  // Atribuição das ocorrencias no vetor das ocorrencias
  for(int Ndif = 0; Ndif < n_diferentes; Ndif++){
    int contador = 0;

    for(int Nvet = 0; Nvet < n; Nvet++){
      if(vetorDiferentes[Ndif] == vetor[Nvet]){
        contador++;
      }
    }
    
    vetorOcorrencias[Ndif] = contador;
  }

  // Imprime na tela os números diferentes que ocorreram e suas aparições
  for(int i = 0; i < n_diferentes; i++){
    if(vetorOcorrencias[i] == 1){
      printf("%.2f Ocorre %i vez.\n", vetorDiferentes[i], vetorOcorrencias[i]);
    } else{
      printf("%.2f Ocorre %i vezes.\n", vetorDiferentes[i], vetorOcorrencias[i]);
    }
  }

  return 0;
}

// Função que retorna um booleano de verificação
int pertence(float x, float vetor[], int n){
  for(int i = 0; i < n; i++){
    if(x == vetor[i]){
      return 1;
      break;
    }
  }

  return 0;
}
