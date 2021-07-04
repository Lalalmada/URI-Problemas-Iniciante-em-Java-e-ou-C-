#include <stdio.h>
#include <stdlib.h>

int main()

{

int x,y,cont;
   scanf("%d",&x);
   scanf("%d",&y);

     if(x>y){
        
         for (cont = y+1 ; cont < x; cont++) {
              
              if (cont%5==2 || cont%5==3){
                printf("%d\n", cont);}
            }

        }    
        else if (x<y){
         for (cont = x+1 ; cont < y; cont++) {
              
              if (cont%5==2 || cont%5==3){
               printf("%d\n", cont);
                  
              }
            }

        }      
             


return 0;

}
