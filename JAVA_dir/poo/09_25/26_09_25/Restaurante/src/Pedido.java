/**
 * Pedido
 */

import java.util.ArrayList;

public class Pedido {

  private int numeroPedido;
  private int numeroMesa;
  private ArrayList<Alimento> pedidos;
  private double precoTotal;

  Pedido(){}

  Pedido(int nPedido, int nMesa, ArrayList<Alimento> als, double pTotal){
    this.numeroPedido = nPedido;
    this.numeroMesa = nMesa;
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

  public void AddPedidos(Alimento al) {
    this.pedidos.add(al);
  }

  public int getNumeroMesa() {
    return numeroMesa;
  }

  public void setNumeroMesa(int numeroMesa) {
    this.numeroMesa = numeroMesa;
  }

  public double getPrecoTotal(ArrayList<Alimento> pedidos){
    double total = 0.0;
    for(Alimento x : pedidos){
      total += x.getPreco();
    }
    return total;
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

    //#TODO

    return null;
  }
  
}
