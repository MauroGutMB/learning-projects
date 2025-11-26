import enums.*;

public class PlanoBasico extends Assinatura {
  private Double desconto;

  PlanoBasico(TipoAssinatura tipo, Double precoMensal, Double desconto){
    super(tipo, precoMensal);
    this.desconto = desconto;
  }

  @Override
  public Double calcularPreco() {
    return this.precoMensal - (this.precoMensal * desconto);
  }
  
}
