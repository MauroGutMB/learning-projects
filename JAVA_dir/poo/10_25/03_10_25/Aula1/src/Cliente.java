import java.util.concurrent.ThreadLocalRandom;

/**
 * Cliente
 */
public class Cliente {

  public enum TipoCliente{
    ALUNO(1),
    PROFESSOR(2),
    EXTERNO(3);

    private int valor;

    TipoCliente(int valor){
      this.valor = valor;
    }

    public int getValor() {
      return valor;
    }

  }

  private int codigo = ThreadLocalRandom.current().nextInt(100, 1000);
  private String nome;
  private String email;
  private String telefone;
  private String endereco;
  private TipoCliente tipo;

  Cliente(String nome, String email, String telefone, String endereco, TipoCliente tipo){
    this.nome = nome; 
    this.email = email;
    this.telefone = telefone;
    this.endereco = endereco;
    this.tipo = tipo;
  }

  public int getCodigo() {
    return codigo;
  }

  public String getNome() {
    return nome;
  }
  public void setNome(String nome) {
    this.nome = nome;
  }

  public String getEmail() {
    return email;
  }
  public void setEmail(String email) {
    this.email = email;
  }

  public String getTelefone() {
    return telefone;
  }
  public void setTelefone(String telefone) {
    this.telefone = telefone;
  }

  public String getEndereco() {
    return endereco;
  }
  public void setEndereco(String endereco) {
    this.endereco = endereco;
  }

  public TipoCliente getTipo() {
    return tipo;
  }
  public void setTipo(TipoCliente tipo) {
    this.tipo = tipo;
  }

  // --------------------------------- //

  public void clienteDados(){
    System.out.printf("+----------------------------------+\n");
    System.out.printf("|           DADOS DO CLIENTE       |\n");
    System.out.printf("+----------------------------------+\n");
    System.out.printf("  Nome:     %s          \n", this.getNome());
    System.out.printf("  Email:    %s          \n", this.getEmail());
    System.out.printf("  Telefone: %s          \n", this.getTelefone());
    System.out.printf("  Código:   %d          \n", this.getCodigo());
    System.out.printf("  Vínculo:  %s          \n", this.getTipo());
    System.out.printf("  Endereço:  %s         \n", this.getEndereco());
  }
  
}
