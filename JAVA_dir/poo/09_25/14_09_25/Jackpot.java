import java.util.Scanner;
import java.util.Random;


public class Jackpot{

  public static Scanner in = new Scanner(System.in);

  public static void main(String[] args) {

    String[] mult = {"1", "2", "3", "4", "5"};

    boolean jogando = true;
    float saldo = 100;

    while(jogando){

      int opt = 0;


      System.out.println("+------------------------------+");
      System.out.println("|        Jackpot em JAVA       |");
      System.out.println("+------------------------------+");
      System.out.printf( "|         SALDO: R$%.2f      \n", saldo);
      System.out.println("|                              ");
      System.out.println("| 1. Apostar                   ");
      System.out.println("| 2. Estatisticas              ");
      System.out.println("| 3. Sair                      ");
      System.out.println("+------------------------------+");

      System.out.print("\n -> ");

      try {
        opt = in.nextInt();
      } catch (Exception e) {
        in.next();
        limpar();
        System.out.println("Por favor, Insira uma opcao valida!\n\n");
        continue;
      }

      limpar();

      switch (opt) {
        case 1:
          String[] rng = rodar(mult);
          int multiplicador = retorno(rng);
          float saldo_pre = saldo;

          saldo = inserir_aposta(saldo);

          float aposta = saldo_pre - saldo;

          System.out.println(aposta);
          System.out.println(saldo);
          System.out.println(multiplicador);

          mensagem_roleta(multiplicador);
          saldo += receber_pagamento(aposta, multiplicador);
          break;

        default:
          break;
      }

    }

    in.close();

  }


  // ------------ rodar roleta --------------- //

  static String[] rodar(String[] x){
    Random n = new Random();
    String[] a = {x[n.nextInt(5)], x[n.nextInt(5)], x[n.nextInt(5)]};
    return a;
  }

  // ------------ apostar --------------- //

  static float inserir_aposta(float saldo){

    float aposta = 0;

    do {
      System.out.print("Insira um valor acima de R$0.00 -> ");
      try {
        aposta = in.nextFloat();
      } catch (Exception e) {
        in.next();
        limpar();
        System.out.println("Insira um valor valido.");
        continue;
      }
    } while (aposta <= 0);

    return saldo - aposta;
  }

  static int retorno(String[] roleta){
    if(roleta[0].equals("1") && roleta[1].equals("1") && roleta[2].equals("1")){
      return 2;
    }
    if(roleta[0].equals("2") && roleta[1].equals("2") && roleta[2].equals("2")){
      return 5;
    }
    if(roleta[0].equals("3") && roleta[1].equals("3") && roleta[2].equals("3")){
      return 10;
    }
    if(roleta[0].equals("4") && roleta[1].equals("4") && roleta[2].equals("4")){
      return 20;
    }
    if(roleta[0].equals("5") && roleta[1].equals("5") && roleta[2].equals("5")){
      return 50;
    }
    return 0;
  }

  static float receber_pagamento(float saldo, int multiplicador){
    if(multiplicador > 0){
      return saldo * multiplicador;
    }
    return 0;
  }

  // ------------ mensagens -----------------//

  static void mensagem_roleta(int multiplicador){
    if(multiplicador > 0){
      System.out.println("+------------------------------------+");
      System.out.println("|Sua aposta foi aumentada em " + multiplicador + " vezes!|");
      System.out.println("+------------------------------------+");
    } else{
      System.out.println("+---------------------+");
      System.out.println("|Voce perdeu a aposta!|");
      System.out.println("+---------------------+");
    }
  }

  // ------------ limpar tela --------------- //

  static void limpar(){
    try {
      new ProcessBuilder("clear").inheritIO().start().waitFor();
    } catch (Exception e) {
      System.out.println("Erro ao limpar o console  => " + e);
    }
  }
}
