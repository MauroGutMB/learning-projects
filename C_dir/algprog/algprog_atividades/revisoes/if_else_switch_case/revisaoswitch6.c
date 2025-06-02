#include <stdio.h>

// Simulação de opções de um banco: Saldo, Depósito, Saque, Sair
// Atividade difícil, loop e switch interno 

int main(){

  float saldo = 1000;
  float deposito, saque;
  int opcao;

  while(1){

    printf("\nSelecione uma das opções abaixo.");
    printf("\n1. Verificar Saldo.\n2. Realizar Depósito.\n3. Realizar Saque.\n4.Sair.\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch(opcao){

      case 1:
        printf("O seu saldo atual é de R$%.2f.\n", saldo); 
        break;

      case 2:
        printf("Insira uma quantia para depositar: "); 
        scanf("%f", &deposito);
        printf("A quantia de R$%.2f foi depositada em sua conta.\n", deposito);
        saldo += deposito;
        deposito = 0;
        break;

      case 3:
        printf("Insira uma quantia para sacar: "); 
        scanf("%f", &saque);
        printf("A quantia de R$%.2f foi retirada de sua conta.\n", saque);
        if(saque <= saldo){
          saldo -= saque;
          saque = 0;
          break;
        } else{
          printf("Você não tem dinheiro o suficiente pra realizar esta ação.\n");
          break;
        }
      
      case 4:
        printf("Saindo do banco.");
        return 1;

      default:
        printf("Ação inválida.\n");

      
    }
  }

}
