import java.util.ArrayList;

/**
 * Cliente
 *
 * O sistema armazena informações dos donos dos
 * animais, como nome, endereço, CEP, telefone e e-mail, para facilitar o
 * contato e
 * o registro de suas interações com a clínica.
 */
public class Cliente {

  private String nome;
  private String cep;
  private String telefone;
  private String email;

  Cliente() {
  }

  Cliente(String nome, String cep, String telefone, String email) {
    this.nome = nome;
    this.cep = cep;
    this.telefone = telefone;
    this.email = email;
  }

  // ----- setters e getters ------ //

  public void setNome(String nome) {
    this.nome = nome;
  }

  public String getNome() {
    return nome;
  }

  public void setCep(String cep) {
    this.cep = cep;
  }

  public String getCep() {
    return cep;
  }

  public void setTelefone(String telefone) {
    this.telefone = telefone;
  }

  public String getTelefone() {
    return telefone;
  }

  public void setEmail(String email) {
    this.email = email;
  }

  public String getEmail() {
    return email;
  }

  // ----- métodos ---- //

  void mostrarDados() {
    new App().limparTela();

    System.out.printf("+-----------------------+\n");
    System.out.printf("|       CLIENTE         |\n");
    System.out.printf("+-----------------------+\n");
    System.out.println("| Nome: " + this.getNome());
    System.out.println("| CEP: " + this.getCep());
    System.out.println("| Telefone: " + this.getTelefone());
    System.out.println("| E-mail: " + this.getEmail());
    System.out.printf("+-----------------------+\n");
  }

  void adicionarCliente(ArrayList<Cliente> listaClientes) {

    new App().limparTela();

    System.out.printf("+-----------------------+\n");
    System.out.printf("|     ADICIONAR         |\n");
    System.out.printf("|      CLIENTE          |\n");
    System.out.printf("+-----------------------+\n");
    System.out.print("Nome: ");

    String nome = IO.readln();

    System.out.print("CEP: ");
    String cep = IO.readln();

    System.out.print("Telefone: ");
    String telefone = IO.readln();

    System.out.print("E-mail: ");
    String email = IO.readln();

    Cliente cliente = new Cliente(nome, cep, telefone, email);

    listaClientes.add(cliente);

  }
}
