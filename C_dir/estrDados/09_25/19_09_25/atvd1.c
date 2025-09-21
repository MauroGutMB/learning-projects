#include <stdio.h>

// MEDIA (m = SUM(x) / n)
// Dm = SUM(x - m) / n

float media(int n, float m[n]){
  float media = 0;
    
  for(int i = 0; i < n; i++){
    scanf("%f", &m[i]);
    media += m[i];
  }

  media = media / n;

  return media;
}

float variancia(int n, float m[n], float media){
  float v = 0;

  for(int i = 0; i < n; i++){
    v += (m[i] - media) * (m[i] - media);
  }

  return v / n;
}

int main(){

  int n;
  float m;
  float v;

  scanf("%i", &n);

  float numeros[n];

  m = media(n, numeros);

  printf("Média -> %.2f\n", m);

  v = variancia(n, numeros, m);

  printf("Var. -> %.2f", v);

  return 0;
}
