/**
 * Pedido
 */

import java.util.ArrayList;

public class Pedido {

  private int numeroPedido;
  private ArrayList<Alimento> pedidos;
  private double precoTotal;

  Pedido(){}

  Pedido(int nPedido, ArrayList<Alimento> als, double pTotal){
    this.numeroPedido = nPedido;
    this.pedidos = als;
    this.precoTotal = pTotal;
  }

  public int getNumeroPedido() {
    return numeroPedido;
  }

  public void setNumeroPedido(int numeroPedido) {
    this.numeroPedido = numeroPedido;
  }

  public ArrayList<Alimento> getPedidos() {
    return pedidos;
  }

  public void setPedidos(ArrayList<Alimento> pedidos) {
    this.pedidos = pedidos;
  }

  public double getPrecoTotal() {
    return precoTotal;
  }

  public void setPrecoTotal(double precoTotal) {
    this.precoTotal = precoTotal;
  }

  // ----------------------------//
  
  public ArrayList<Alimento> adicionarPedidoConta(ArrayList<Alimento> cardapio){
    ArrayList<Alimento> temp = new ArrayList<Alimento>();

    new App().limpar();
    System.out.println("+---------------------------------+");
    System.out.println("|        ADICIONAR PEDIDO         |");
    System.out.println("+---------------------------------+");
    new Alimento().listarAlimentos(cardapio);
    
    for(int i = 0; i < cardapio.size(); i++){
      Alimento x = cardapio.get(i);
      System.out.println(x.getDescricao());
    }

    return null;
  }
  
}
