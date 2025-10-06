import java.util.concurrent.ThreadLocalRandom;

/**
 * Categoria
 */
public class Categoria {

  private String nome;
  private int codigo = ThreadLocalRandom.current().nextInt(10, 100);

  Categoria(){}

  Categoria(String nome){
    this.nome = nome;
  }

  // ------------- setter e getter ----------- //

  public void setNome(String nome) {
    this.nome = nome;
  }
  public String getNome() {
    return nome;
  }

  public int getCodigo() {
    return codigo;
  }

}
