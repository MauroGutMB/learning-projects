/**
 * App
 */
public class App {

  Pet meuPet = new Pet("", 5, 5);
  boolean inGame = true;

  public void main(String[] args) {
    
    while(meuPet.nome.isBlank()){

      System.out.print("Por favor, insira um nome para o seu pet -> ");
      meuPet.nome = IO.readln().toUpperCase();

      limpar();

    }

    while(inGame){

      String opt = "0";

      limpar();
      menuOpcao();

      System.out.print("\n-> ");
      opt = IO.readln();

      switch(opt){
        case "1" : limpar(); meuPet.brincar(); IO.readln(); break;
        case "2" : limpar(); meuPet.alimentar(); IO.readln();  break;
        case "3" : limpar(); meuPet.showStatus(); IO.readln(); break;
        case "4" : limpar(); inGame = false;
      }

      if(opt.equals("4")){
        telaSair();
      }

    }

  }

  // ------------ Menu Principal ----------- //

  public void menuOpcao(){
    System.out.printf("+----------------------------+\n");
    System.out.printf("|   1. Brincar com o Pet     |\n");
    System.out.printf("|   2. Alimentar o Pet       |\n");
    System.out.printf("|   3. Ver status do Pet     |\n");
    System.out.printf("|   4. Sair                  |\n");
    System.out.printf("+----------------------------+\n");
  }

  // ------------ Tela de sair ----------- //

  public void telaSair(){
    System.out.printf("+----------------------------+\n");
    System.out.printf("|    Pet virtual em java     |\n");
    System.out.printf("|    Obrigado por usar o     |\n");
    System.out.printf("|        Pet virtual!        |\n");
    System.out.printf("+----------------------------+\n");
  }


  // ------------ Limpar Tela ------------ //

  public void limpar(){
    try {
      new ProcessBuilder("clear").inheritIO().start().waitFor();
    } catch (Exception e) {
      System.out.println("Erro ao limpar o console  => " + e);
    }
  }

}
