import java.time.LocalDate;
import java.util.concurrent.ThreadLocalRandom;

/**
 * Livro
 */
public class Livro {

  private int codigo = ThreadLocalRandom.current().nextInt(10000, 100000); // codigo de 5 digitos
  private String titulo;
  private String autor;
  private LocalDate data;
  private double valor;
  private int estoque;
  private Categoria categoria;


  Livro(){}

  Livro(String titulo, String autor, LocalDate data, double valor, int estoque, Categoria categoria){
    this.titulo = titulo;
    this.autor = autor;
    this.data = data;
    this.estoque = estoque;
    this.categoria = categoria;
  }

  // -------- setters e getters -------- //
  
  public int getCodigo() {
    return codigo;
  }

  public void setTitulo(String titulo) {
    this.titulo = titulo;
  }
  public String getTitulo() {
    return titulo;
  }

  public void setAutor(String autor) {
    this.autor = autor;
  }
  public String getAutor() {
    return autor;
  }

  public void setData(LocalDate data) {
    this.data = data;
  }
  public LocalDate getData() {
    return data;
  }

  public void setValor(double valor) {
    this.valor = valor;
  }
  public double getValor() {
    return valor;
  }

  public void setEstoque(int estoque) {
    this.estoque = estoque;
  }
  public int getEstoque() {
    return estoque;
  }

  public void setCategoria(Categoria categoria) {
    this.categoria = categoria;
  }
  public Categoria getCategoria() {
    return categoria;
  }
  

}
