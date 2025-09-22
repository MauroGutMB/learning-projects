/**
 * Pet
 */

public class Pet {

  String nome;
  int felicidade;
  int fome;

  // ------------ Construtor ---------------- //

  Pet(String nome, int f1, int f2){
    this.nome = nome;
    this.felicidade = f1;
    this.fome = f2;
  }

  // ------------ Brincar / Alimentar ---------------- //

  public void brincar(){
    this.felicidade = Math.min(10, this.felicidade + 2);
    this.fome = Math.min(10, this.fome + 1);
    System.out.printf("+----------------------------+\n");
    System.out.printf("|       O pet brincou!       |\n");
    System.out.printf("|     +2 Feli. +1 Fome       |\n");
    System.out.printf("+----------------------------+\n");
  }

  public void alimentar(Alimento alimento){
    this.felicidade = Math.max(0, this.felicidade - alimento.nivelSaboroso);
    this.fome = Math.max(0, this.fome - alimento.valorNutricional);
    System.out.printf("+----------------------------+\n");
    System.out.printf("|    O pet foi Alimentado!   |\n");
    System.out.printf("|     -%d Fome  -%d Feli.      |\n", alimento.valorNutricional, alimento.nivelSaboroso);
    System.out.printf("+----------------------------+\n");
  }

  // ------------ Mostrar Status ---------------- //

  public void showStatus(){
    System.out.printf("+----------------------------+\n");
    System.out.printf("| TAMAGOTCHI  %10s     |\n", this.nome);
    System.out.printf("+----------------------------+\n");
    System.out.printf("|       Fome: %2d            |\n", this.fome);
    System.out.printf("|       Fel.: %2d            |\n", this.felicidade);
    System.out.printf("+----------------------------+\n");
  }

  // ------------- Escholher um alimento ------------- //

  Alimento telaEscolherAlimento(Alimento[] alimentos){

    System.out.printf("+----------------------------+\n");
    for(int i = 0; i < alimentos.length; i++){
      System.out.printf("|  %3d.  %10s          |\n", i+1, alimentos[i].nome);
    }
    System.out.printf("+----------------------------+\n");

    String opt = "0";

    System.out.print("\n-> ");
    opt = IO.readln();
    int optInt = 0;

    try {
      optInt = Integer.parseInt(opt);
    } catch (Exception e) {
      new App().limpar();
      System.out.printf("+----------------------------+\n");
      System.out.printf("| Insira uma comida válida   |\n", this.fome);
      System.out.printf("+----------------------------+\n");


      return null;
    }

    try {
      return alimentos[optInt - 1];
    } catch (Exception e) {
      new App().limpar();
      System.out.printf("+----------------------------+\n");
      System.out.printf("| Insira uma comida válida   |\n", this.fome);
      System.out.printf("+----------------------------+\n");
    }

    return null;

  }
  
}
