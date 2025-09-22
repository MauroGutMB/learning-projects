import javax.swing.*;

public class App {

  public void main(String[] args) throws Exception{
    
    JFrame frame = new JFrame("Swing test");
    frame.setSize(400, 500);
    frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

    JLabel label = new JLabel("Label test");
    frame.add(label);

    frame.setVisible(true);

  }

}
