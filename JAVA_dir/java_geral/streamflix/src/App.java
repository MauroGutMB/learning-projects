import enums.TipoAssinatura;

public class App {

  void main(){
    Assinatura n = new PlanoBasico(TipoAssinatura.PlanoBasico, 50.00, 0.15);
    Assinatura n2 = new PlanoPremium(TipoAssinatura.PlanoPremium, 70.50, .30);

    System.out.println(n.calcularPreco());
    n.exibirDetalhes();
    System.out.println(n2.calcularPreco());
    n2.exibirDetalhes();
  }

}
