public class Gato extends Animal {
  String som;

  Gato(int patas, String especie, String som){
    super(patas, especie);
    this.som = som;
  }

  @Override
  public void emitirSom(){
    System.out.println(som);
  }
}
