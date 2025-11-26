import enums.*;

public class PlanoPremium extends Assinatura{
  private Double desconto;

  PlanoPremium(TipoAssinatura tipo, Double precoMensal, Double desconto){
    super(tipo, precoMensal);
    this.desconto = desconto;
  }

  @Override
  public Double calcularPreco() {
    return this.precoMensal - (this.precoMensal * desconto);
  }

}
