import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

/**
 * App
 */

public class App {

  JFrame janela;
  JTextField textfield;
  JButton[] numeros = new JButton[10];
  JButton[] funcoes = new JButton[8];
  JButton botaoAdicao, botaoSubtracao, botaDivisao, botaoMultiplicacao;
  JButton botaoDec, botaoIgual, botaDel, botaoClr;
  JPanel painel;

  double num1 = 0, num2 = 0, resultado = 0;
  char operador;

  App(){
    janela = new JFrame("calculadora em java");
    janela.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    janela.setSize(600, 550);
    janela.setLayout(null);

    textfield = new JTextField();
    textfield.setBounds(50, 25, 300, 50);
    janela.add(textfield);

    // #TODO

    janela.setVisible(true);
  }

  public static void main(String[] args) {
                   
    App calculadora = new App();

  }
  
}
