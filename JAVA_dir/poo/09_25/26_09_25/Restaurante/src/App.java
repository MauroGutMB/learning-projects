/**
 * App
 */

import java.util.ArrayList;

public class App {

  ArrayList<Alimento> cardapio = new ArrayList<Alimento>();

  void main(String[] args) {
    
    Alimento x1 = new Alimento("Carne de Sol", "Carne de Sol ...", 29.99);
    Alimento x2 = new Alimento("Carne moída", "carne moida ...", 15.99);
    cardapio.add(x1);
    cardapio.add(x2);

    menuAddCardapio();

  }

  // ----------------------------------------------- //
  
  private void menuAddCardapio(){

    boolean inMenu = true;

    while (inMenu) {
      System.out.printf("+----------------------+\n");
      System.out.printf("|   Insira uma opção   |\n");
      System.out.printf("+----------------------+\n");
      System.out.printf("| 1. Inserir Alimentos |\n");
      System.out.printf("| 2. Mostrar Cardapio  |\n");
      System.out.printf("| 3. Remover alimentos |\n");
      System.out.printf("| 4.       Sair        |\n");
      System.out.printf("+----------------------+\n");

      String optS = "0";
      int optI = 0;

      optS = IO.readln("-> ");

      try {
        optI = Integer.parseInt(optS);
      } catch (Exception e) {
        limpar();
        System.out.printf("+-------------------------------------+\n");
        System.out.printf("| Por favor, insira uma opção válida. |\n");
        System.out.printf("+-------------------------------------+\n");
        continue;
      }

      switch (optI) {
        case 1:
          addItem(cardapio);
          continue;
        case 2:
          limpar();
          new Alimento().listarAlimentos(cardapio);
          continue;
        case 3: // #TODO
          continue;
        case 4:
          inMenu = false; break;
        default:
          limpar();
          System.out.printf("+-------------------------------------+\n");
          System.out.printf("| Por favor, insira uma opção válida. |\n");
          System.out.printf("+-------------------------------------+\n");
      }

    }
  }  

  // ----------------------------------------------- //

  void addItem(ArrayList<Alimento> al){
    limpar();
    System.out.printf("+----------------------------+\n");
    System.out.printf("|   Insira um nome ao Item   |\n");
    System.out.printf("+----------------------------+\n");

    String n = IO.readln("->> ");
    
    limpar();
    System.out.printf("+----------------------------+\n");
    System.out.printf("|   Insira uma descrição     |\n");
    System.out.printf("+----------------------------+\n");

    String d = IO.readln("->> ");

    limpar();
    System.out.printf("+----------------------------+\n");
    System.out.printf("|      Insira um preço       |\n");
    System.out.printf("+----------------------------+\n");

    String p = IO.readln("->> ");
    double preco;

    try {
      preco = Double.parseDouble(p);
    } catch (Exception e) {
      limpar();
      System.out.printf("+-----------------+\n");
      System.out.printf("| Preço inválido  |\n");
      System.out.printf("+-----------------+\n");
      return;
    }

    Alimento temp = new Alimento(n, d, preco);

    al.add(temp);

  }

  // ----------------------------------------------- //

  void limpar() {
    try {
      new ProcessBuilder("clear").inheritIO().start().waitFor();
    } catch (Exception e) {
      System.out.println("Erro ao limpar o console  => " + e);
    }
  }

}
