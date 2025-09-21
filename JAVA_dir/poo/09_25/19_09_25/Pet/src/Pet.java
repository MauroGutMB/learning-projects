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

  public void alimentar(){
    this.felicidade = Math.max(0, this.felicidade - 1);
    this.fome = Math.max(0, this.fome - 2);
    System.out.printf("+----------------------------+\n");
    System.out.printf("|    O pet foi Alimentado!   |\n");
    System.out.printf("|     -2 Fome  -1 Feli.      |\n");
    System.out.printf("+----------------------------+\n");
  }

  // ------------ Mostrar Status ---------------- //

  public void showStatus(){
    System.out.printf("+----------------------------+\n");
    System.out.printf("| TAMAGOTCHI  %10s     |\n", this.nome);
    System.out.printf("+----------------------------+\n");
    System.out.printf("|       Fome: %3d            |\n", this.fome);
    System.out.printf("|       Fel.: %3d            |\n", this.felicidade);
    System.out.printf("+----------------------------+\n");
  }
  
}
