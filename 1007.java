import java.io.IOException;
import java.util.Scanner;

public class Main
{

  public static void main (String[]args) throws IOException
  {


    Scanner scan = new Scanner (System.in);
    int A;
    int B;
    int C;
    int D;
    
      A = scan.nextInt ();
        B = scan.nextInt ();
         C = scan.nextInt ();
          D = scan.nextInt ();
    
    int X =( A * B)-(C*D);
      System.out.print ("DIFERENCA = " + X + "\n");

  }

}
