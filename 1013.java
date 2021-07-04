import java.io.IOException;
import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
	      
	      
	      int A, B, C, AB, CB, ABC;

        Scanner sc = new Scanner(System.in);

        A = sc.nextInt();
        B = sc.nextInt();
        C = sc.nextInt();
	    
	      AB= (A+B+ Math.abs(A-B))/2;
          CB= (C+B+ Math.abs(C-B))/2;
          ABC= (AB+CB+ Math.abs(AB-CB))/2;
		System.out.println(ABC+ " eh o maior");
	}
}
