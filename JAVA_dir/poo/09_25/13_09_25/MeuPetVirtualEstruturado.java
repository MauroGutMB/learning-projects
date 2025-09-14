import java.util.Scanner;

public class MeuPetVirtualEstruturado{

  public static void main(String[] args){

    Scanner entrada = new Scanner(System.in);

    String pet_nome = "";
    int pet_fome = 5;
    int pet_felicidade = 5;
    int max = 10, min = 0;

    boolean in_game = true;

    do {

      System.out.print("Insira um nome pro seu pet -> ");    
      pet_nome = entrada.next();
      
    } while (pet_nome.isEmpty());

    // ------------------ logica do tamagotchi -------------------------- //
    
    while(in_game){

      int opt = 0;

      System.out.printf("+-------------------+\n");
      System.out.printf("| Nome:  %s         \n", pet_nome);
      System.out.printf("| Fome:  %d         \n", pet_fome);
      System.out.printf("| Fel.:  %d         \n", pet_felicidade);
      System.out.printf("|                   \n");
      System.out.printf("|                   \n");
      System.out.printf("|       @@@         \n");
      System.out.printf("|       @@@         \n");
      System.out.printf("+-------------------+\n");

      System.out.print("Opcoes:\n1. Alimentar\n2. Brincar\n3. Sair\n-> ");
      opt = entrada.nextInt();

      limpar();

      switch (opt) {
        case 1:
          in_game = verif(pet_felicidade - 1, pet_fome - 2, max, min);
          se_morto(in_game);
          comer(pet_nome);  
          pet_fome -= 2;
          pet_felicidade -= 1;
          break;

        case 2:
          in_game = verif(pet_felicidade + 2, pet_fome + 1, max, min);
          se_morto(in_game);
          brincar(pet_nome);  
          pet_felicidade += 2;
          pet_fome += 1;
          break;

        case 3:
          in_game = false;
          break;

        default:
          System.out.println("Opcao invalida.");
          break;
      }
      
    }

    entrada.close();
  }

  // ---------------------- métodos de lógica ------------------- //

  static void brincar(String pNome){
    System.out.println(pNome + " esta brincando! 2 pontos de felicidade subiram e 1 ponto de fome desceu.");
  }

  static void comer(String pNome){
    System.out.println(pNome + " esta comendo! 2 pontos de fome subiram e 1 ponto de felicidade desceu.");
  }

  static boolean verif(int fel, int fome, int max, int min){
    if(fel < 0 || fome < 0){
      return false;
    }

    if(fel > 10 || fome > 10){
      return false;
    }

    return true;
  } 

  static void se_morto(boolean morto){
    if(!morto == true){
      System.out.println("O tamagotchi morreu! :(");
      System.exit(0);
    }
  }

  // ----------------- métodos aux ---------------- //

  static void limpar(){
    try {
      new ProcessBuilder("clear").inheritIO().start().waitFor();
    } catch (Exception e) {
      System.out.println("Erro ao limpar o console  => " + e);
    }
  }

}
