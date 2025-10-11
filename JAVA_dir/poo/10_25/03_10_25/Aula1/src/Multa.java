/**
 * Multa
 */
public class Multa {

  private int codigo;
  private Emprestimo emprestimo;
  private double valor;
  private boolean paga;

  Multa(){}
  
  Multa(Emprestimo emprestimo, double valor, boolean paga){
    this.emprestimo = emprestimo;
    this.valor = valor;
    this.paga = paga;
  }

  // -------- setters e getters -------- //

  public int getCodigo() {
    return codigo;
  }

  public void setEmprestimo(Emprestimo emprestimo) {
    this.emprestimo = emprestimo;
  }
  public Emprestimo getEmprestimo() {
    return emprestimo;
  }

  public void setValor(double valor) {
    this.valor = valor;
  }
  public double getValor() {
    return valor;
  }

  public void setPaga(boolean paga) {
    this.paga = paga;
  }
  public boolean isPaga() {
    return paga;
  }
}
