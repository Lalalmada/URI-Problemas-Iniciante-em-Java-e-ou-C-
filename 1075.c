#include <stdio.h>

int main(void) {

    int N,total,cont,i,totalnum,numeroQualquer;
 
   
         scanf("%i", &N); 
        for (i = 0; i <= 10000; i++) {
          
          if (i%N==2) {
    
         printf("%d\n", i);
       }
      }
       
    
    return 0;
}
