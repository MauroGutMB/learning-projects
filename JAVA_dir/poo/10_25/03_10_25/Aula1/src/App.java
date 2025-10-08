import java.time.LocalDate;

/**
 * App
 */
public class App {

  void main(String[] args) {

    Cliente cli1 = new Cliente("Mauro", "mgmb@gmail.com", "", "", Cliente.TipoCliente.ALUNO);
    Cliente cli2 = new Cliente("Pedro", "Pedro@gmail.com", "", "", Cliente.TipoCliente.ALUNO);

    Categoria cat1 = new Categoria("Ação");

    Livro liv1 = new Livro("Um bom Livro", "Qualquer autor", LocalDate.of(1999, 5, 24), 12.49, 2, cat1);

    System.out.println(cli1.getNome());
    System.out.println(cli1.getEmail());
    System.out.println(cli1.getTipo());
    System.out.println(cli1.getCodigo());

    cli1.clienteDados();
    liv1.livroDados();


  }

}                                 
