#include <stdio.h>
#include <stdlib.h>
 
    int main() {
    
          double A,B,C;
    
    scanf("%lf %lf %lf",&A,&B,&C);


        if((A>= B+C)|| (B>= A+C) || (C>= A+B) ){
            
       printf("NAO FORMA TRIANGULO\n");
        }
        else{
            
             if((A*A == B*B + C*C)||  (A*A + C*C == B*B )   ||  (A*A +  B*B == C*C )  ){
                  printf("TRIANGULO RETANGULO\n");
             }
           
           if((A*A > B*B + C*C) || (B*B  >  A*A + C*C) || ( C*C >  A*A +B*B )){
                  printf("TRIANGULO OBTUSANGULO\n");
             }
             
              if((A*A < B*B + C*C) && ( B*B< A*A  + C*C) && ( C*C< A*A + B*B)){
                  printf("TRIANGULO ACUTANGULO\n");
             }
             
             if(A==B && B==C){
                  printf("TRIANGULO EQUILATERO\n");
             }
             
             if((A==B && B!=C)|| (A==C && B!=C) || (B==C && A!=C) ){
                  printf("TRIANGULO ISOSCELES\n");
             }
        }
          
            
   return 0;
}
