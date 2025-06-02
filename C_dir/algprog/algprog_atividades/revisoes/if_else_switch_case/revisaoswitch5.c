#include <stdio.h>

// Conversor de unidades de medida (Km/Milhas, Kg/Libras, Celsius/Fahrenheit)
// Atividade difícil, envolve Switch interno e tipo de dado float

int main(){

  int opcao;
  float unidade;
  
  printf("Selecione a conversão que você deseja realizar.\n1. Km/Milhas.\n2. Kg/Libras.\n3. Celsius/Fahrenheit.\n");
  printf("Opção: ");
  scanf("%d", &opcao);

  switch (opcao){

    case 1:
      opcao = 0;
      printf("Conversor de Km/Milhas.\nInsira o formato de entrada (1 para KM, 2 para Milha): ");
      scanf("%d", &opcao);
      switch(opcao){

        case 1:
          printf("A unidade de entrada está em Quilômetros.\n");
          printf("Insira o valor a ser transformado: ");
          scanf("%f", &unidade);
          unidade = unidade * 0.6214;
          printf("O valor em Milhas é %.2fMh.", unidade);
          break;
          
        case 2:
          printf("A unidade de entrada está em Milhas.\n");
          printf("Insira o valor a ser transformado: ");
          scanf("%f", &unidade);
          unidade = unidade * 1.609344;
          printf("O valor em Quilômetros é %.2fKm.", unidade);
          break;

        default:
          printf("unidade de entrada inválida.");
      }
      break;

    case 2:
      opcao = 0;
      printf("Conversor de Kg/Libras.\nInsira o formato de entrada (1 para KG, 2 para Libra): ");
      scanf("%d", &opcao);
      switch(opcao){

        case 1:
          printf("A unidade de entrada está em Quilos.\n");
          printf("Insira o valor a ser transformado: ");
          scanf("%f", &unidade);
          unidade = unidade * 2.20462262;
          printf("O valor em Libras é %.2fLb.", unidade);
          break;

        case 2:
          printf("A unidade de entrada está em Libras.\n");
          printf("Insira o valor a ser transformado: ");
          scanf("%f", &unidade);
          unidade = unidade * 0.45359237;
          printf("O valor em Quilos é %.2fKg.", unidade);
          break;

        default:
          printf("unidade de entrada inválida.");
      }
      break;

    case 3:
      opcao = 0;
      printf("Conversor de Celsius/Fahrenheit.\nInsira o formato de entrada (1 para C, 2 para F): ");
      scanf("%d", &opcao);
      switch(opcao){

        case 1:
          printf("A unidade de entrada está em Celsius.\n");
          printf("Insira o valor a ser transformado: ");
          scanf("%f", &unidade);
          unidade = unidade * (9.0/5.0) + 32;
          printf("O valor em Fahrenheit é F %.2f°", unidade);
          break;

        case 2:
          printf("A unidade de entrada está em Fahrenheit.\n");
          printf("Insira o valor a ser transformado: ");
          scanf("%f", &unidade);
          unidade = (unidade - 32) * (5.0/9.0);
          printf("O valor em Celsius é C %.2f°", unidade);
          break;

        default:
          printf("unidade de entrada inválida.");
      }
      break;
    default:
      printf("Opção inválida.");
  }
}
