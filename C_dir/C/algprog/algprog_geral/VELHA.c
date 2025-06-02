#include <stdio.h>
#include <stdlib.h>

// Funções protótipo
void mostrar_tabuleiro(int casas[3][3], char valores[3][3], int tamanho1, int tamanho2);
void mostrar_jogadas(int casas[3][3], char valores[3][3], int tamanho1, int tamanho2);
void marcar_jogada(int jogada, char jogador, int casas[3][3], char valores[3][3]);
int V_E(int casas[3][3], char valores[3][3], char jogador, int jogando);
int verificar_jogada(int casas[3][3], int jogada, int tamanho1, int tamanho2);


/*
  Jogo da velha em C que eu criei com a utilização de vetores 2D.
  Também aproveitei a experiência pra aprender a utilizar funções e entender como
  argumentos funcionam dentro e fora delas.
*/


int main(){

  int casas[3][3] = {{11, 12, 13},
                     {21, 22, 23},
                     {31, 32, 33}};

  int tamanho1 = sizeof(casas) / sizeof(casas[0]);
  int tamanho2 = sizeof(casas[0]) / sizeof(casas[0][0]);

  char valores[3][3] = {{' ', ' ', ' '},
                        {' ', ' ', ' '},
                        {' ', ' ', ' '}};

  char jogador1 = 'X', jogador2 = 'O'; // Caractere de cada jogador
  int jogando = 1; // Booleano pro jogo rodar

  // Loop principal onde ocorre a lógica do jogo 
  while(jogando){

    /*
      As variáveis abaixo, teoricamente, serão construídas e destruídas após cada iteração.
      Como não vou utilizar elas fora do laço while, declaro elas dentro do laço.
    */
    int jogada; // Variável que diz qual foi a jogada atual
    int booleano; // Booleano pra armazenar V/F pra validação da jogada

    mostrar_tabuleiro(casas, valores, tamanho1, tamanho2);
    mostrar_jogadas(casas, valores, tamanho1, tamanho2);

    // -- JOGADOR 1 ---

    printf("jogador 1 -> ");
    scanf("%i", &jogada);
    while(getchar() != '\n'){}
    booleano = verificar_jogada(casas, jogada, tamanho1, tamanho2);

    while(booleano != 1){
      printf("\nJogada inválida.\n");
      printf("jogador 1 -> ");
      scanf("%i", &jogada);
      while(getchar() != '\n'){}
      booleano = verificar_jogada(casas, jogada, tamanho1, tamanho2);
    }

    marcar_jogada(jogada, jogador1, casas, valores);

    jogando = (V_E(casas, valores, jogador1, jogando));

    system("clear");

    // --- DIVISÃO ---

    if(jogando == 0)break; // Impede que o resto seja executado caso o jogador 1 ganhe

    mostrar_tabuleiro(casas, valores, tamanho1, tamanho2);
    mostrar_jogadas(casas, valores, tamanho1, tamanho2);

    // --- JOGADOR 2 ---

    printf("jogador 2 -> ");
    scanf("%i", &jogada);
    while(getchar() != '\n'){}
    booleano = verificar_jogada(casas, jogada, tamanho1, tamanho2);

    while(booleano != 1){
      printf("\nJogada inválida.\n");
      printf("jogador 2 -> ");
      scanf("%i", &jogada);
      while(getchar() != '\n'){}
      booleano = verificar_jogada(casas, jogada, tamanho1, tamanho2);
    }

    marcar_jogada(jogada, jogador2, casas, valores);

    system("clear");

    jogando = (V_E(casas, valores, jogador2, jogando));

  }

  printf("\n\n");
  mostrar_tabuleiro(casas, valores, tamanho1, tamanho2);
}

// Função pra validar uma jogada
int verificar_jogada(int casas[3][3], int jogada, int tamanho1, int tamanho2){
  
  /*
    A função utiliza os valores do tamanho do array 2D para iterar sobre cada ítem do array.
    Ela verifica se alguma das casas são compatíveis com a jogada que está sendo verificada
    e se a jogada também é diferente de 0.
    Retorna o booleano verdadeiro(1) caso encontre uma casa possível.
    Retorna o booleano falso(0) caso encontre uma inválida.
  */

  for(int i = 0; i < tamanho1; i++){
    for(int j = 0; j < tamanho2; j++){
      
      if(casas[i][j] == jogada && jogada != 0){
        return 1;
      }
    }
  }
  
  return 0;
}

// Função pra mostrar o tabuleiro atual
void mostrar_tabuleiro(int casas[3][3], char valores[3][3], int tamanho1, int tamanho2){

  /*
    A mesma lógica de iteração sobre um array 2D foi utilizada aqui para
    imprimir o tabuleiro atual com os caracteres do jogador 1 e do jogador 2.
  */

  for(int i = 0; i < tamanho1; i++){
    printf("|");
    for(int j = 0; j < tamanho2; j++) {
      printf(" %c |", valores[i][j]); 
    }
    printf("\n");
  }
}

// Função pra mostrar as possíveis jogadas
void mostrar_jogadas(int casas[3][3], char valores[3][3], int tamanho1, int tamanho2){

    /*
      Iteração sobre um array 2D pra imprimir as possíveis jogadas de acordo com as
      casas disponíveis. Imprime 00 para as casas que já foram jogadas.
    */

    printf("Possíveis jogadas:\n");
    for(int i = 0; i < tamanho1; i++){
      for(int j = 0; j < tamanho2; j++) {
        printf(" %02i ", casas[i][j]); 
      }
      printf("\n");
    }
}

// Switch case pra alterar o valor do array das casas e dos símbolos de cada jogador
void marcar_jogada(int jogada, char jogador, int casas[3][3], char valores[3][3]){

    /*
      Caso a jogada seja válida através da função de validação, ela entra
      no swtich que linka a casa desejada e muda os valores do array de 
      casas e valores com o número 0 (impossível de se repetir uma jogada em uma
      casa que já foi utilizad) e o símbolo do jogador pra visualizar corretamente.  

      OBS: cada jogador tem um caractere único, a função é chamada duas vezes com argumentos 
      diferentes (jogador1 ou jogador2). No caso da vez do jogador 1, a função chamará com o
      argumento do jogador 1 ('X'), e vice versa, armazenando o valor na variável 'jogador'.
    */

  switch(jogada){
    case 11:
      casas[0][0] = 0;
      valores[0][0] = jogador;
      break;
    case 12:
      casas[0][1] = 0;
      valores[0][1] = jogador;
      break;
    case 13:
      casas[0][2] = 0;
      valores[0][2] = jogador;
      break;
    case 21:
      casas[1][0] = 0;
      valores[1][0] = jogador;
      break;
    case 22:
      casas[1][1] = 0;
      valores[1][1] = jogador;
      break;
    case 23:
      casas[1][2] = 0;
      valores[1][2] = jogador;
      break;
    case 31:
      casas[2][0] = 0;
      valores[2][0] = jogador;
      break;
    case 32:
      casas[2][1] = 0;
      valores[2][1] = jogador;
      break;
    case 33:
      casas[2][2] = 0;
      valores[2][2] = jogador;
      break;
  }
}

// Função pra verificar vitória ou derrota
int V_E(int casas[3][3], char valores[3][3], char jogador, int jogando){

  /*
    Verificação que ocorre a cada jogada pra verificar as regras de vitória e um jogador.
    Empata caso todas as casas forem ocupadas(iguais a 0 ou diferentes do caractere ' ')
    e nenhuma das regras forem atingidas.
    Retorna 0 caso alguma dessas regras forem cumpridas. (Para o loop principal)
    Retorna 1 sempre que a função é executada sem cumprir nenhuma das regras. (Continua o loop principal)
  */

  // Lógica pra representar qual o jogador vencedor (jogador 1 ou jogador 2)
  int num;
  if(jogador == 'X'){
    num = 1;
  } else{
    num = 2;
  }

  // Verificação pra cada caso
  if((valores[0][0] == jogador) && (valores[0][1] == jogador) && (valores[0][2] == jogador)){
    printf("O jogador %i GANHOU!", num);
    return 0;
    /*
      x x x
      0 0 0
      0 0 0
    */
  }
  if(valores[1][0] == jogador && valores[1][1] == jogador && valores[1][2] == jogador){
    printf("O jogador %i GANHOU!", num);
    return 0;
    /*
      0 0 0
      x x x
      0 0 0
    */
  }
  if(valores[2][0] == jogador && valores[2][1] == jogador && valores[2][2] == jogador){
    printf("O jogador %i GANHOU!", num);
    return 0;
    /*
      0 0 0
      0 0 0
      x x x
    */
  }
  if(valores[0][0] == jogador && valores[1][0] == jogador && valores[2][0] == jogador){
    printf("O jogador %i GANHOU!", num);
    return 0;
    /*
      x 0 0
      x 0 0
      x 0 0
    */
  }
  if(valores[0][1] == jogador && valores[1][1] == jogador && valores[2][1] == jogador){
    printf("O jogador %i GANHOU!", num);
    return 0;
    /*
      0 x 0
      0 x 0
      0 x 0
    */
  }
  if(valores[0][2] == jogador && valores[1][2] == jogador && valores[2][2] == jogador){
    printf("O jogador %i GANHOU!", num);
    return 0;
    /*
      0 0 x
      0 0 x
      0 0 x
    */
  }
  if(valores[0][0] == jogador && valores[1][1] == jogador && valores[2][2] == jogador){
    printf("O jogador %i GANHOU!", num);
    return 0;
    /*
      x 0 0
      0 x 0
      0 0 x
    */
  }
  if(valores[2][0] == jogador && valores[1][1] == jogador && valores[0][2] == jogador){
    printf("O jogador %i GANHOU!", num);
    return 0;
    /*
      0 0 x
      0 x 0
      x 0 0
    */
  }
  if(casas[0][0] == 0 && casas[0][1] == 0 && casas[0][2] == 0 &&
     casas[1][0] == 0 && casas[1][1] == 0 && casas[1][2] == 0 &&
     casas[2][0] == 0 && casas[2][1] == 0 && casas[2][2] == 0){
    printf("O jogo Empatou!!");
    return 0;
    /*
     * qualquer caso de empate.
      EX:
      x 0 x
      x 0 x
      0 x 0
    */
  }

  return 1;
}
