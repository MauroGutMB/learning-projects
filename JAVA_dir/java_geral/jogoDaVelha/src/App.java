/**
 * App
 */

public class App {

  void main() {
    Tabuleiro tabuleiro = new Tabuleiro();
    Jogador1 p1 = new Jogador1(tabuleiro);
    Jogador2 p2 = new Jogador2(tabuleiro);

    boolean jogando = true;
    int ponto = 0;

    telaInicial();

    while (jogando) {
      tabuleiro.mostrarTabuleiro();
      p1.MarcarJogada();
      ponto = tabuleiro.jogoFinalizado(p1.simboloJogador);
      limparTela();

      tabuleiro.mostrarTabuleiro();
      p2.MarcarJogada();
      ponto = tabuleiro.jogoFinalizado(p2.simboloJogador);
      limparTela();

      if(ponto != 0){
        telaResultado(ponto);
      }
    }

  }

  private void telaInicial() {
    System.out.print("+-----------------------+\n");
    System.out.print("| JOGO DA VELHA EM JAVA |\n");
    System.out.print("+-----------------------+\n");
    System.out.print("| 1. Utilize as casas   |\n");
    System.out.print("|    disponíveis para   |\n");
    System.out.print("|          jogar.       |\n");
    System.out.print("+-----------------------+\n\n\n");
  }

  private void telaResultado(int resultado) {
    System.out.print("+-----------------------+\n");
    System.out.printf("| O jogador %3d venceu! |\n", resultado);
    System.out.print("+-----------------------+\n\n\n");
  }

  private void limparTela() {
    try {
      new ProcessBuilder("clear").inheritIO().start().waitFor();
    } catch (Exception e) {
      System.out.println("Não foi possível limpar a tela.");
    }

  }
}
