#include <stdio.h>

int main(void) {
 int num,i, qtd;
  
   
            scanf("%d", &qtd);
         
       for(i=0;i<qtd;i++){ 
             scanf("%i",&num);
        
        if (num%2==0 ){ //EVEN->Par 
            if (num>0)  printf("EVEN POSITIVE\n");
            if (num<0)  printf("EVEN NEGATIVE\n");
        } 
        
         if (num%2!=0){ //ODD-> Impar
             if (num>0)  printf("ODD POSITIVE\n");
             if (num<0)  printf("ODD NEGATIVE\n");
        }
      
         if (num==0)  printf("NULL\n");;
      
         }
    
    return 0;
}
