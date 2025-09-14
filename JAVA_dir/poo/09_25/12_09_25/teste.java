import java.util.Scanner;

public class teste{

  public static void main(String[] args) {

    int x;
    Scanner ent = new Scanner(System.in);
    
    do {
      
      System.out.print("Insira um valor acima de 10 -> ");
      x = ent.nextInt();

    } while (x < 10);

    ent.close();

  }

}
