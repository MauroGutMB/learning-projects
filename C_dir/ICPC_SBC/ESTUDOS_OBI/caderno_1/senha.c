/*
Entrada
A primeira linha da entrada contém três números inteiros N, M e K, respectivamente o número de caracteres da senha, o número de letras borradas da senha e o comprimento de cada palavra. A segunda linha contem uma cadeia de caracteres de comprimento N, a senha escrita no papel, com o caractere `#' (cerquilho) representando as letras borradas. Cada uma das M linhas seguintes contém uma palavra Si, sendo que a Si-ésima palavra contém as letras para substituir a i-ésima letra borrada da senha. A última linha contém um número inteiro P, o número de ordem da senha correta na lista ordenada de possíveis senhas.

Saída
Seu programa deve produzir uma única linha, contendo uma única cadeia de caracteres, a senha correta.

Restrições
1 ≤ N ≤ 500
1 ≤ M ≤ N
1 ≤ K ≤ 26
comprimento de Si = K, para 1 ≤ i ≤ M
1 ≤ P ≤ 109
Na senha com as letras "borradas", cada caractere é uma letra minúscula não acentuada ou o caractere #.
Nas palavras com as letras que podem substituir as letras borradas da senha, cada caractere é uma letra minúscula não acentuada.
P ≤ número total de possíveis senhas
Informações sobre a pontuação
Para um conjunto de casos de testes valendo 30 pontos, M=1.
Para um conjunto de casos de testes valendo outros 30 pontos, M ≤ 8 e K ≤ 6.
Para um conjunto de casos de testes valendo outros 40 pontos, nenhuma restrição adicional.

Exemplos
Entrada
  6 2 2
  x#yy#z
  ab
  cd
  3
Saída
  xbyycz
*/

#include <stdio.h>

int main(){

  int N; // Caracteres da senha
  int M; // Número de letras borradas
  int K; // Comprimento de cada palavra

  scanf("%i", &N);
  scanf("%i", &M);
  scanf("%i", &K);
  while(getchar() != '\n'){}

  char senha[N]; // Senha escrita no papel. EX: N=4, M=1, K=1 Senha="a#zz"
  
  scanf("%s", senha);

  printf("%s", senha);

return 0;
}


































