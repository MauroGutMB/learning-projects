#include <math.h>
#include <stdio.h>
#include <string.h>

#define MAX_NOME 25
#define MAX_POPULACAO 1000
#define MARCADO -1.0f

typedef struct {
  int id;
  float valor;
} Elemento;

// --- Prototipação ---
float calcular_media(const Elemento[], int);
float calcular_desvio_padrao(const Elemento[], int, float);
float calcular_mediana(Elemento[], int);
void ordenar_elementos(Elemento[], int);
void calcular_frequencia(const Elemento[], int);
void calcular_intervalos(const Elemento[], int, int);
int definir_classes(int);
void limpar_buffer();
void coletar_dados(Elemento[], int, const char[]);

// --- Principal ---
int main() {
  char nome[MAX_NOME];
  int total_elementos;

  printf("Defina o tamanho da população --> ");
  scanf("%d", &total_elementos);
  limpar_buffer();

  if (total_elementos <= 0 || total_elementos > MAX_POPULACAO) {
    printf("Número inválido de elementos.\n");
    return 1;
  }

  printf("Defina um nome para os elementos --> ");
  fgets(nome, MAX_NOME, stdin);
  nome[strcspn(nome, "\n")] = '\0';

  Elemento X[total_elementos];
  coletar_dados(X, total_elementos, nome);

  int classes = definir_classes(total_elementos);
  printf("\nNúmero de classes sugerido: %d\n", classes);

  float media = calcular_media(X, total_elementos);
  printf("Média: %.2f\n", media);

  float desvio = calcular_desvio_padrao(X, total_elementos, media);
  printf("Desvio Padrão: %.2f\n", desvio);

  float mediana = calcular_mediana(X, total_elementos);
  printf("Mediana: %.2f\n", mediana);

  calcular_frequencia(X, total_elementos);
  calcular_intervalos(X, total_elementos, classes);

  return 0;
}

// --- Funções auxiliares ---
void limpar_buffer() {
  while (getchar() != '\n') {}
}

void coletar_dados(Elemento X[], int total, const char nome[]) {
  for (int i = 0; i < total; i++) {
    X[i].id = i + 1;
    printf("Defina o valor de '%s %d' --> ", nome, X[i].id);
    scanf("%f", &X[i].valor);
  }
}

// --- Média ---
float calcular_media(const Elemento X[], int total) {
  float soma = 0;
  for (int i = 0; i < total; i++)
    soma += X[i].valor;
  return soma / total;
}

// --- Desvio padrão ---
float calcular_desvio_padrao(const Elemento X[], int total, float media) {
  float soma_quadrados = 0;
  for (int i = 0; i < total; i++)
    soma_quadrados += powf(X[i].valor - media, 2);
  return sqrtf(soma_quadrados / total);
}

// --- Ordenação (Bubble Sort) ---
void ordenar_elementos(Elemento X[], int total) {
  for (int i = 0; i < total - 1; i++) {
    for (int j = 0; j < total - i - 1; j++) {
      if (X[j].valor > X[j + 1].valor) {
        Elemento temp = X[j];
        X[j] = X[j + 1];
        X[j + 1] = temp;
      }
    }
  }
}

// --- Mediana ---
float calcular_mediana(Elemento X[], int total) {
  ordenar_elementos(X, total);
  return (total % 2 == 0)
    ? (X[total / 2 - 1].valor + X[total / 2].valor) / 2.0f
    : X[total / 2].valor;
}

// --- Frequência absoluta ---
void calcular_frequencia(const Elemento X[], int total) {
  Elemento copia[total];
  memcpy(copia, X, sizeof(Elemento) * total);

  printf("\nFrequência dos valores:\n");
  for (int i = 0; i < total; i++) {
    if (copia[i].valor != MARCADO) {
      int freq = 1;
      for (int j = i + 1; j < total; j++) {
        if (copia[i].valor == copia[j].valor) {
          freq++;
          copia[j].valor = MARCADO;
        }
      }
      printf("Valor: %.2f, Frequência: %d\n", copia[i].valor, freq);
    }
  }
}

// --- Intervalos de classe ---
void calcular_intervalos(const Elemento X[], int total, int classes) {
  float min = X[0].valor, max = X[0].valor;

  for (int i = 1; i < total; i++) {
    if (X[i].valor < min) min = X[i].valor;
    if (X[i].valor > max) max = X[i].valor;
  }

  float intervalo = (max - min) / classes;
  int contagem[classes];
  memset(contagem, 0, sizeof(contagem));

  printf("\nIntervalos de Classe:\n");
  for (int i = 0; i < classes; i++) {
    float inf = min + i * intervalo;
    float sup = min + (i + 1) * intervalo;

    for (int j = 0; j < total; j++) {
      int ultima_classe = (i == classes - 1);
      if ((X[j].valor >= inf && X[j].valor < sup) || (ultima_classe && X[j].valor == sup))
        contagem[i]++;
    }
        if (i == classes - 1) {
      // Última classe, inclui o limite superior
      printf("Classe %d: [%.2f, %.2f]\n", i + 1, inf, sup);
    } else {
      // Classes intermediárias
      printf("Classe %d: [%.2f, %.2f[\n", i + 1, inf, sup );
    }
  }

  printf("\nContagem de elementos em cada classe:\n");
  for (int i = 0; i < classes; i++) {
    printf("Classe %d: %d elementos\n", i + 1, contagem[i]);
  }
}

// --- Número ideal de classes ---
int definir_classes(int total) {
  return (int)floor(sqrt(total));
}
