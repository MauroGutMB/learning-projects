import java.util.concurrent.ThreadLocalRandom;

/**
 * Cliente
 *
 * Será preciso cadastrar os Clientes (alunos, professores ou externos) com seus dados principais: código, nome, email, telefone e endereço.
 */
public class Cliente {

  private int codigo = ThreadLocalRandom.current().nextInt(100, 1000);
  private String nome;
  private String email;
  private String telefone;
  private String endereco;
  private clientes{

  };

  public enum clientes{
    ALUNO(1),
    PROFESSOR(2),
    EXTERNO(3);

  }


  Cliente(String nome, String email, String telefone, String endereco, clientes cli){
    this.nome = nome; 
    this.email = email;
    this.telefone = telefone;
    this.endereco = endereco;
  }

  
}
