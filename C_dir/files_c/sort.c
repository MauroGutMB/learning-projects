#include <stdio.h>
//#include <string.h>                //incluir <string.h> caso esteja utilizando métodos de string


void organizarNums(int lista_nums[], int tamanho_nums);
void mostrarListaNums(int lista_nums[], int tamanho_nums);
void organizarChars(char lista_chars[], char tamanho_chars);
void mostrarListaChars(char lista_chars[], char tamanho_chars);
//funções protótipo


//função principal
int main(){
  int lista_nums[] = {11, 13, 16, 12, 14, 15, 2, 4, 6, 7, 8, 1, 3, 5, 10, 9, 19, 17, 18, 20};
  char lista_chars[] = {'N', 'C', 'E', 'A', 'M', 'B', 'F', 'D', 'G', 'H', 'I', 'L', 'J', 'K'};
  int tamanho_nums = sizeof(lista_nums)/sizeof(lista_nums[0]);
  int tamanho_chars = sizeof(lista_chars)/sizeof(lista_chars[0]);

  organizarNums(lista_nums, tamanho_nums);
  mostrarListaNums(lista_nums, tamanho_nums);
  printf("\n");
  organizarChars(lista_chars, tamanho_chars);
  mostrarListaChars(lista_chars, tamanho_chars);

  // int valor = 65;
  // printf("\n\n\n --> %c", valor);

  return 0;
}


//função que mostra a lista quando chamada
void mostrarListaNums(int lista_nums[], int tamanho_nums){
  for (int i = 0; i < tamanho_nums; i++){
    printf("%d ", lista_nums[i]);
  }
}

//função que mostra a lista quando chamada
void mostrarListaChars(char lista_chars[], char tamanho_chars){
  for (int i = 0; i < tamanho_chars; i++){
    printf("%c ", lista_chars[i]);
  }
}


//função que organiza a lista quando chamada
void organizarNums(int lista_nums[], int tamanho){
  for (int i = 0; i < tamanho - 1; i++){
    //Primeiro 'for' itera sobre cada item do array e garante que a iteração só acabe quando todos os valores estiverem organizados
    
    for (int j = 0; j < tamanho - 1; j++){
      //Segundo 'for' itera sobre cada item do array e pega seus valores
      
      if (lista_nums[j] > lista_nums[j+1]){       //se valor do index J for maior que o valor do index J+1, não itera para mudar o valor 
        int temp_buffer = lista_nums[j];     //armazenamento temporario do valor do item do index J
        lista_nums[j] = lista_nums[j+1];          //armazena o valor do index J+1 em J, organizando os valores
        lista_nums[j+1] = temp_buffer;       //o menor valor  vai para trás do maior valor
      }
    }
  }
}


//função que organiza a lista quando chamada
void organizarChars(char lista_chars[], char tamanho_chars){
  for (int i = 0; i < tamanho_chars - 1; i++){
    //Primeiro 'for' itera sobre cada item do array e garante que a iteração só acabe quando todos os valores estiverem organizados
    
    for (int j = 0; j < tamanho_chars - 1; j++){
      //Segundo 'for' itera sobre cada item do array e pega seus valores
      
      if (lista_chars[j] > lista_chars[j+1]){       //se valor do index J for maior que o valor do index J+1, não itera para mudar o valor 
        int temp_buffer = lista_chars[j];     //armazenamento temporario do valor do item do index J
        lista_chars[j] = lista_chars[j+1];          //armazena o valor do index J+1 em J, organizando os valores
        lista_chars[j+1] = temp_buffer;       //o menor valor  vai para trás do maior valor
      }
    }
  }
}
