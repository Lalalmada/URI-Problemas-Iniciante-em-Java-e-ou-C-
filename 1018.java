import java.io.IOException;
import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
	     
	      int x;

        Scanner sc = new Scanner(System.in);
         x = sc.nextInt();
		int a=x/100; //aqui quantas notas de 100 serao usadas
		  int b=(x%100)/50; // aqui dara quantas notas de 50 serao usadas
		   int c= ((x%100)%50)/20; // aqui dara quantas notas de 20 serao usadas
			 int d= (((x%100)%50)%20)/10; // aqui dara quantas notas de 10 serao usadas
			  int e=((((x%100)%50)%20)%10)/5;
			   int f= (((((x%100)%50)%20)%10)%5)/2;
			     int g= ((((((x%100)%50)%20)%10)%5)%2)/1; 
			    	System.out.println(x);
		System.out.println(a+" nota(s) de R$ 100,00");
		System.out.println(b+" nota(s) de R$ 50,00");
		System.out.println(c+" nota(s) de R$ 20,00");
		System.out.println(d+" nota(s) de R$ 10,00");
		System.out.println(e+" nota(s) de R$ 5,00");
		System.out.println(f+" nota(s) de R$ 2,00");
		System.out.println(g+" nota(s) de R$ 1,00");
	}
}
