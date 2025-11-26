public abstract class Animal {
  protected int patas;
  protected String especie;

  public Animal(int patas, String especie){
    this.patas = patas;
    this.especie = especie;
  }

  public abstract void emitirSom();
}
