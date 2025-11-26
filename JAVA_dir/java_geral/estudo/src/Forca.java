import java.util.Random;
import java.util.Set;
import java.util.HashSet;

public class Forca {

  // atributos
  private String palavrasSecretas[] = {
      "ALGORITMO",
      "COMPILADOR",
      "DESENVOLVEDOR",
      "INTERFACE",
      "VARIAVEL",
      "POLIMORFISMO",
      "RECURSIVIDADE",
      "ESTRUTURA",
      "ORIENTACAO",
      "SINTAXE"
  };

  private Set<String> palavrasChutadas = new HashSet<>();
  private String palavra = palavrasSecretas[new Random().nextInt(10)];
  private int tamanhoPalavra = palavra.length();

  // construtor
  public Forca(){

  }


  // método pra imprimir a palavra
  public void imprimirPalavra(){
    System.out.println("Palavra: " + palavra);
    System.out.println("Tamanho da Palavra: " + tamanhoPalavra);
    for(int i = 0; i < tamanhoPalavra; i++){

      System.out.print("_ ");
    }
  }

  // método pra chutar a palavra
  public void chutarPalavra(String c){
    if(palavrasChutadas.contains(c)){
      System.out.println("A palavra já foi inserida.");
      return;
    }
    if(palavra.contains(c)){
      System.out.println("A letra existe.");
      return;
    }
    System.out.println("A letra não foi encontrada.");
  }
}
