/**
 * Jogador1
 */
public class Jogador1 {

  String simboloJogador = "X";
  String simboloInimigo = "O";
  Tabuleiro tabuleiroEmUso;

  Jogador1(Tabuleiro tab){
    this.tabuleiroEmUso = tab;
  }

  public void MarcarJogada(){

    boolean selecionandoCasa = true;
    String casaJogada = new String();

    while(selecionandoCasa){
      System.out.print("Selecione uma das casas disponíveis -> ");
      casaJogada = IO.readln();

      boolean casaValida = validarJogada(casaJogada);

      if(casaValida == false){
        System.out.println("Jogada inválida!");
        tabuleiroEmUso.mostrarTabuleiro();
        continue;
      }

      modificarTabuleiro(tabuleiroEmUso, casaJogada);

      selecionandoCasa = false;
    }

  }

  // colocar o simbolo do jogador na casa jogada
  private void modificarTabuleiro(Tabuleiro tab, String casa){
    for(int i = 0; i < tab.size1; i++){
      for(int j = 0; j < tab.size2; j++){
        if(tab.casas[i][j].equals(casa)){
          tab.casas[i][j] = this.simboloJogador;
        }
      }
    }
  }

  // validar jogada do jogador
  private boolean validarJogada(String casa){

    boolean check1 = true;
    boolean check2 = true;

    if(
    casa.equals("a1") == false &&
    casa.equals("a2") == false &&
    casa.equals("a3") == false &&
    casa.equals("b1") == false &&
    casa.equals("b2") == false &&
    casa.equals("b3") == false &&
    casa.equals("c1") == false &&
    casa.equals("c2") == false &&
    casa.equals("c3") == false
    ) check1 = false;


    return (check1 && check2);
  }



}
