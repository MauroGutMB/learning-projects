import java.time.LocalDate;
import java.util.List;

/**
 * Emprestimo
 */
public class Emprestimo {

  private int codigo;
  private Cliente cliente;
  private List<Livro> livros;
  private LocalDate dataEmprestimo;
  private LocalDate dataDevolucaoPrevista;

  Emprestimo(){}

  Emprestimo(Cliente cliente, List<Livro> livros, LocalDate dataEmprestimo, LocalDate dataDevolucaoPrevista){
    this.cliente = cliente;
    this.livros = livros;
    this.dataEmprestimo = dataEmprestimo;
    this.dataDevolucaoPrevista = dataDevolucaoPrevista;
  }

  // -------- setters e getters -------- //

  public int getCodigo() {
    return codigo;
  }

  public void setCliente(Cliente cliente) {
    this.cliente = cliente;
  }
  public Cliente getCliente() {
    return cliente;
  }

  public void setLivros(List<Livro> livros) {
    this.livros = livros;
  }
  public List<Livro> getLivros() {
    return livros;
  }

  public void setDataEmprestimo(LocalDate dataEmprestimo) {
    this.dataEmprestimo = dataEmprestimo;
  }
  public LocalDate getDataEmprestimo() {
    return dataEmprestimo;
  }

  public void setDataDevolucaoPrevista(LocalDate dataDevolucaoPrevista) {
    this.dataDevolucaoPrevista = dataDevolucaoPrevista;
  }
  public LocalDate getDataDevolucaoPrevista() {
    return dataDevolucaoPrevista;
  }
  
}
