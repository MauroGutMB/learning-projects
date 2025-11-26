public class Cachorro extends Animal {
  protected String som;

  Cachorro(int patas, String especie, String som){
    super(patas, especie);
    this.som = som;
  }

  @Override
  public void emitirSom(){
    System.out.println(som);
  }

}
