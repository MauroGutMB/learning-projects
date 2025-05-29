#include <stdio.h>

int main(){
  float a, b, c;

  printf("Digite a primeira nota --> ");
  scanf("%f", &a);
  printf("Digite a segunda nota --> ");
  scanf("%f", &b);

  c = (a + b)/2;

  printf("A média é %.2f\n", c);

  if (c < 7 && c >= 4){
    float pf;
    printf("O aluno está de prova final.\n");
    printf("Digite a terceira nota --> ");
    scanf("%f", &pf);

    c = (a + b + pf)/3;

    if (c < 6){
      printf("O aluno está REPROVADO.\n");
      printf("A média do aluno foi de %.2f", c);
    } else {
      printf("O aluno foi aprovado na prova final.\n");
      printf("A média final do aluno foi de %.2f", c);
    } 

  } else if(c < 4) {
    printf("O aluno está reprovado e não tem direito a prova final.");
  } else if ( c == 7){
    printf("O aluno está na média.");
  } else {
    printf("O aluno está Aprovado.");
  }

}
