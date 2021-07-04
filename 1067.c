#include <stdio.h>

int main() {
 
     
     int x;
     
     scanf("%i",&x);
        
        if(1<=x && x<=1000){
            for(int i=1;i<=x;i++){
              if(i%2!=0){
                printf("%d\n", i);
              }
            }
        }
      
    return 0;
}
