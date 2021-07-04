import java.io.IOException;
import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
	     
	      
	      int N;
  Scanner sc = new Scanner(System.in);
         N = sc.nextInt();
		int a=N/365; 
		  int b=(N%365)/30; 
		   int c= (N%365)%30;
			    
		System.out.println(a+" ano(s)");
		System.out.println(b+" mes(es)");
		System.out.println(c+" dia(s)");
		
	}
}
