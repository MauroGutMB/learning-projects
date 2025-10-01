/**
 * Alimento
 */

import java.util.ArrayList;

public class Alimento {

  private String nome;
  private String descricao;
  private double preco;

  Alimento(){}

  Alimento(String n, String desc, double p){
    this.nome = n;
    this.descricao = desc;
    this.preco = p;
  }

  public String getNome() {
    return nome;
  }

  public void setNome(String nome) {
    this.nome = nome;
  }

  public String getDescricao() {
    return descricao;
  }

  public void setDescricao(String descricao) {
    this.descricao = descricao;
  }

  public double getPreco() {
    return preco;
  }

  public void setPreco(double preco) {
    this.preco = preco;
  }

  // ------------------------------------- // 

  public void listarAlimentos(ArrayList<Alimento> alimentos){
    int size = alimentos.size();
    System.out.println("+---------------------------------+");
    System.out.println("|              MENU               |");
    System.out.println("+---------------------------------+");
    for(int i = 0; i < size; i++){
      Alimento x = alimentos.get(i);
    System.out.printf("    %d.  %10s  %.2f \n", i+1, x.getNome(), x.getPreco());
    }
    System.out.println("+---------------------------------+");
  }
  
}
