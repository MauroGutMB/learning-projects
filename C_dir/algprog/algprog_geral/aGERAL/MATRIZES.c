#include "matvec.h"

int main(){

  int n = 10;
  int m = 5;
  float mat[n][m];

  preencherMatrizFloat(n, m, mat, 1, 9);
  mostrarMatrizFloat(n, m, mat);

  return 0;
}
