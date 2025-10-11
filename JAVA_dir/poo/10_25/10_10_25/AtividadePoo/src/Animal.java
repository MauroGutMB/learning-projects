import java.util.ArrayList;

/**
 * Animal
 *
 * Cada animal é registrado com informações como nome,
 * idade e sexo, e está associado a um cliente. Além disso, o sistema classifica
 * os
 * animais por espécie (como cães, gatos, aves, etc.), permitindo que cada
 * espécie
 * seja associada a vários animais.
 */
public class Animal {

  public enum Especie {
    CAO,
    GATO,
    AVE,
    ROEDOR,
    PEIXE,
    OUTRO
  }

  private String nome;
  private String idade;
  private String sexo;
  private Cliente dono;
  private Especie especie;

  Animal() {}

  Animal(String nome, String idade, String sexo, Cliente dono, Especie especie) {
    this.nome = nome;
    this.idade = idade;
    this.sexo = sexo;
    this.dono = dono;
    this.especie = especie;
  }

  // ----- setters e getters ------ //

  public void setNome(String nome) {
    this.nome = nome;
  }
  public String getNome() {
    return nome;
  }

  public void setIdade(String idade) {
    this.idade = idade;
  }
  public String getIdade() {
    return idade;
  }

  public void setSexo(String sexo) {
    this.sexo = sexo;
  }
  public String getSexo() {
    return sexo;
  }

  public void setDono(Cliente dono) {
    this.dono = dono;
  }
  public Cliente getDono() {
    return dono;
  }

  public void setEspecie(Especie especie) {
    this.especie = especie;
  }
  public Especie getEspecie() {
    return especie;
  }

  // ----- métodos ---- //

  void mostrarDados() {
    new App().limparTela();

    System.out.printf("+-----------------------+\n");
    System.out.printf("|        ANIMAL         |\n");
    System.out.printf("+-----------------------+\n");
    System.out.printf("Nome: %s\n", this.getNome());
    System.out.printf("Idade: %s\n", this.getIdade());
    System.out.printf("Sexo: %s\n", this.getSexo());
    System.out.printf("Dono: %s\n", this.getDono().getNome());
    System.out.printf("Espécie: %s\n", this.getEspecie().toString());
    System.out.printf("+-----------------------+\n");

  }

  void adicionarAnimal(ArrayList<Animal> animais, ArrayList<Cliente> clientes) {
    new App().limparTela();

    System.out.printf("+-----------------------+\n");
    System.out.printf("|     ADICIONAR ANIMAL  |\n");
    System.out.printf("+-----------------------+\n");
    System.out.printf("| Nome: ");
    String nome = IO.readln();

    System.out.printf("| Idade: ");
    String idade = IO.readln();

    System.out.printf("| Sexo: ");
    String sexo = IO.readln();

    System.out.printf("| Espécie (0-CAO, 1-GATO, 2-AVE, 3-ROEDOR, 4-PEIXE, 5-OUTRO): ");
    String especieStr = IO.readln();

    try {
      int especieInt = Integer.parseInt(especieStr);
      if (especieInt < 0 || especieInt > 5) {
        System.out.println("Espécie inválida!");
        return;
      }
    } catch (Exception e) {
      System.out.println("Espécie inválida!");
      return;
    }

    System.out.println("| Dono (selecione o número): ");
    for (int i = 0; i < clientes.size(); i++) {
      System.out.printf("| %d - %s\n", i, clientes.get(i).getNome());
    }
    System.out.print("Número do dono: ");
    String donoStr = IO.readln();
    int donoInt;
    try {
      donoInt = Integer.parseInt(donoStr);
      if (donoInt < 0 || donoInt >= clientes.size()) {
        System.out.println("Dono inválido!");
        return;
      }
    } catch (Exception e) {
      System.out.println("Dono inválido!");
      return;
    }

    Animal novoAnimal = new Animal(nome, idade, sexo, clientes.get(donoInt), Animal.Especie.values()[Integer.parseInt(especieStr)]);
    animais.add(novoAnimal);
    System.out.println("Animal adicionado com sucesso!");

  }
}
