import java.util.ArrayList;

/**
 * App
 */

public class App {

  ArrayList<Cliente> clientes = new ArrayList<>();
  ArrayList<Animal> animais = new ArrayList<>();
  ArrayList<Consulta> consultas = new ArrayList<>();
  ArrayList<MedVet> medVets = new ArrayList<>();
  ArrayList<Tratamento> tratamentos = new ArrayList<>();

  void main(String[] args) {

    boolean rodando = true;

    while (rodando) {

      limparTela();

      System.out.printf("+----------------------------------+\n");
      System.out.printf("|          Menu de clínica         |\n");
      System.out.printf("+----------------------------------+\n");
      System.out.printf("| 1 - Cadastrar cliente            |\n");
      System.out.printf("| 2 - Cadastrar animal             |\n");
      System.out.printf("| 3 - Cadastrar médico veterinário |\n");
      System.out.printf("| 4 - Agendar consulta             |\n");
      System.out.printf("| 5 - Iniciar tratamento           |\n");
      System.out.printf("| 6 - Pegar Exames                 |\n");
      System.out.printf("+----------------------------------+\n");

      System.out.println("Escolha uma opção: ");
      String opcao = IO.readln();

      switch (opcao) {
        case "1" -> {
          new Cliente().adicionarCliente(clientes);
        }
        case "2" -> {
          new Animal().adicionarAnimal(animais, clientes);
        }
        default -> {
          System.out.println("Opção inválida!");
          continue;
        }
      }
    }

  }

  // ----------------------------------------------- //

  void limparTela() {
    try {
      new ProcessBuilder("clear").inheritIO().start().waitFor();
    } catch (Exception e) {
      System.out.println("Erro ao limpar o console  => " + e);
    }
  }

}
