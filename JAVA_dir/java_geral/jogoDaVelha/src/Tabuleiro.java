/**
 * Tabuleiro
 */
public class Tabuleiro {

  String[][] casas;
  Integer size1 = 3;
  Integer size2 = 3;

  Tabuleiro(){

    this.casas =  new String[3][3];

    casas[0][0] = "a3"; casas[0][1] = "b3"; casas[0][2] = "c3";
    casas[1][0] = "a2"; casas[1][1] = "b2"; casas[1][2] = "c2";
    casas[2][0] = "a1"; casas[2][1] = "b1"; casas[2][2] = "c1";

  }

  public void mostrarTabuleiro(){
    for(int i = 0; i < this.size1; i++){
      for(int j = 0; j < this.size2; j++){
        System.out.printf("[ %2s ] ", casas[i][j]);
      }
      System.out.println();
    }
  }

  public int jogoFinalizado(String simbolo){

    int valor = 0;

    if(simbolo == "X") valor = 1;
    if(simbolo == "O") valor = 2;

    // horizontais
    if(casas[0][0] == simbolo && casas[0][1] == simbolo && casas[0][2] == simbolo) return valor;
    if(casas[1][0] == simbolo && casas[1][1] == simbolo && casas[1][2] == simbolo) return valor;
    if(casas[2][0] == simbolo && casas[2][1] == simbolo && casas[2][2] == simbolo) return valor;

    // verticais
    if(casas[0][0] == simbolo && casas[1][0] == simbolo && casas[2][0] == simbolo) return valor;
    if(casas[0][1] == simbolo && casas[1][1] == simbolo && casas[2][1] == simbolo) return valor;
    if(casas[0][2] == simbolo && casas[1][2] == simbolo && casas[2][2] == simbolo) return valor;

    // diagonais
    if(casas[0][0] == simbolo && casas[1][1] == simbolo && casas[2][2] == simbolo) return valor;
    if(casas[0][2] == simbolo && casas[1][1] == simbolo && casas[2][0] == simbolo) return valor;

    return 0;
  }

}
