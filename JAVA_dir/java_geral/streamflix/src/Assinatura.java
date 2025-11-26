import enums.*;

public abstract class Assinatura {
  TipoAssinatura tipo;
  Double precoMensal;

  public Assinatura(TipoAssinatura tipo, Double precoMensal){
    this.tipo = tipo;
    this.precoMensal = precoMensal;
  }

  public abstract Double calcularPreco();

  public void exibirDetalhes(){
    System.out.print("+------------------------+\n");
    System.out.print("|      INFORMAÇÕES       |\n");
    System.out.print("+------------------------+\n");
    System.out.printf("| TIPO: %s               \n", tipo.toString());
    System.out.printf("| PREÇO BRUTO: %.2fR$          \n", precoMensal);
    System.out.print("+------------------------+\n");
  }
}
