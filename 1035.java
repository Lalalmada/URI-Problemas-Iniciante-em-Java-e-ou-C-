import java.io.IOException;
import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
	     
	      
	      int A,B,C,D;
  Scanner sc = new Scanner(System.in);
         A = sc.nextInt();
         B = sc.nextInt();
         C = sc.nextInt();
         D = sc.nextInt();
		 if (B>C && D>A && C>0 && D>0 && A%2==0 && (C+D)>(A+B)  ){
		 System.out.println("Valores aceitos");
		     
		 } else{
		     System.out.println("Valores nao aceitos");
		 }
		 
		
	}
}
