import java.io.IOException;
import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
	     
	      double A,B,C;
  Scanner sc = new Scanner(System.in);
         A = sc.nextDouble();
         B = sc.nextDouble();
         C = sc.nextDouble();
         
         double delta= B*B-(4*A*C);
         
         if(delta>0 && (A!=0)){
             
             double R1 = (((-1 * B) + Math.pow(delta, 0.5)) / (2*A));
              double R2 = (((-1 * B) - Math.pow(delta, 0.5)) / (2*A));
             
             System.out.printf("R1 = %.5f\n",R1);
             System.out.printf("R2 = %.5f\n",R2);
             
         }else{
             System.out.println("Impossivel calcular");
             
         }
         
		 
	}
}
