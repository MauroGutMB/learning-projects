/*
 * 2) Implemente uma função que calcule a área da superfície e o volume de uma esfera de raio R.
 * Essa função deve obedecer o seguinte protótipo:
 *    
 *    void calc_esfera(float r, float *area, float *volume);
 *
 * A área da superfície e o volume são dados, respectivamente, por 4r^2 e 4r^3/3.
 */

#include <stdio.h>
#include <math.h>

// float pi = 3.14;

void calc_esfera(float r, float *area, float *volume){
  *area = 4 * (pow(r, 2));
  *volume = (4.00/3.00) * (pow(r, 3));
}

int main(){

  float raio = 2;

  float area;
  float volume;

  calc_esfera(raio, &area, &volume);

  printf("+----------------+\n");
  printf("| Área: %2.2f   \n", area);
  printf("| Volume: %2.2f   \n", volume);
  printf("+----------------+\n");

  return 0;
}
