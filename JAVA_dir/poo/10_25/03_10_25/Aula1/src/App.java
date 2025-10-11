import java.lang.reflect.Array;
import java.time.LocalDate;
import java.util.*;

/**
 * App
 */
public class App {

  ArrayList<Cliente> clientes;
  ArrayList<Categoria> categorias;
  ArrayList<Livro> livros;
  ArrayList<Emprestimo> emprestimos;
  ArrayList<Multa > multas;

  void main(){

    // Objetos de exemplo
    Cliente cli1 = new Cliente("Claudio", "clau@gmail.com", "11999999999", "Rua A, 123", Cliente.TipoCliente.ALUNO);
    Categoria cat1 = new Categoria("Ficção");
    Livro liv1 = new Livro("O Senhor dos Anéis", "JJR Token", LocalDate.of(2000, 11, 25), 199.99, 5, cat1);
    Emprestimo emp1 = new Emprestimo(cli1, livros, LocalDate.of(2024, 6, 1), LocalDate.of(2024, 6, 15));
    Multa mul1 = new Multa(emp1, 5.0, false);
  
    // Listas de objetos
    clientes = new ArrayList<Cliente>();
    categorias = new ArrayList<Categoria>();
    livros = new ArrayList<Livro>();
    emprestimos = new ArrayList<Emprestimo>();
    multas = new ArrayList<Multa>();

    //Criar 5 clientes, 10 livros, 3 categorias, 3 emprestimos e 1 multa.
    //Lógica de biblioteca

    boolean rodando = true;

    while(rodando){
      menu();
      System.out.printf("Escolha uma opção: ");
      
      String input;
      input = IO.readln();

      int inputInt = Integer.parseInt(input);

      switch (inputInt) {
        case 1->cadastrarCliente();
      }

    }

  }

  void menu(){

    limpar();

    System.out.printf("+--------------------------------+\n");
    System.out.printf("|     Sistema bibliotecario      |\n");
    System.out.printf("+--------------------------------+\n");
    System.out.printf("| 1 - Cadastrar Cliente          |\n");
    System.out.printf("| 2 - Cadastrar Categoria        |\n");
    System.out.printf("| 3 - Cadastrar Livro            |\n");
    System.out.printf("+--------------------------------+\n");
    System.out.printf("| 4 - Visualizar Clientes        |\n");
    System.out.printf("| 5 - Visualizar Categorias      |\n");
    System.out.printf("| 6 - Visualizar Livros          |\n");
    System.out.printf("+--------------------------------+\n");
    System.out.printf("| 7 - Realizar Empréstimo        |\n");
    System.out.printf("| 8 - Devolver Livro             |\n");
    System.out.printf("+--------------------------------+\n");
    System.out.printf("| 9 - Pagar Multa                |\n");
    System.out.printf("+--------------------------------+\n");
    System.out.printf("| 0 - Sair                       |\n");
    System.out.printf("+--------------------------------+\n");

  }

  void cadastrarCliente(){
    limpar();
    System.out.printf("+------------------------------+\n");
    System.out.printf("|     Cadastrar Cliente        |\n");
    System.out.printf("+------------------------------+\n");

    System.out.printf("Nome: ");
    String nome = IO.readln();

    System.out.printf("Email: ");
    String email = IO.readln();

    System.out.printf("Telefone: ");
    String telefone = IO.readln();

    System.out.printf("Endereço: ");
    String endereco = IO.readln();

    System.out.printf("Tipo (1 - Aluno, 2 - Professor, 3 - Externo)\n-> ");

    String tipoStr = IO.readln();
    try{
      Integer.parseInt(tipoStr);
    }
    catch(Exception e){
      System.out.printf("Tipo inválido! Definindo como Aluno.\n");
      tipoStr = "1";
    }
    int tipoInput = Integer.parseInt(tipoStr);

    Cliente.TipoCliente tipo;
    switch(tipoInput){
      case 1:
        tipo = Cliente.TipoCliente.ALUNO;
        break;
      case 2:
        tipo = Cliente.TipoCliente.PROFESSOR;
        break;
      case 3:
        tipo = Cliente.TipoCliente.EXTERNO;
        break;
      default:
        tipo = Cliente.TipoCliente.ALUNO;
        break;
    }

    Cliente cliente = new Cliente(nome, email, telefone, endereco, tipo);
    clientes.add(cliente);

    System.out.printf("Cliente cadastrado com sucesso!\n");
    System.out.printf("Pressione Enter para continuar...");
    IO.readln();
    limpar();
  }

  // -------- Limpar console -------- //

  void limpar() {
    try {
      new ProcessBuilder("clear").inheritIO().start().waitFor();
    } catch (Exception e) {
      System.out.println("Erro ao limpar o console  => " + e);
    }
  }
}
