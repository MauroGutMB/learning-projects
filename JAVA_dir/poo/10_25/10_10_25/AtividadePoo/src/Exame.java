/**
 * Exame
 *
 * Para complementar o diagnóstico e o tratamento,
podem ser realizados exames nos animais. O sistema registra informações
como a descrição do exame, que é associada ao respectivo animal.
 */
public class Exame {

  private String descricao;
  private Animal animal;

  Exame(){}

  Exame(String descricao, Animal animal){
    this.descricao = descricao;
    this.animal = animal;
  }

  // ----- setters e getters ------ //

  public void setDescricao(String descricao) {
    this.descricao = descricao;
  }
  public String getDescricao() {
    return descricao;
  }

  public void setAnimal(Animal animal) {
    this.animal = animal;
  }
  public Animal getAnimal() {
    return animal;
  }
  
}
