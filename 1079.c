#include <stdio.h>

int main() {

             int i, qtd;
             float a,b,c,media,total;
         
         scanf("%d", &qtd); 
        
        
        for (i = 1; i <= qtd; i++) {
        scanf("%f%f%f",&a,&b,&c);
        total= (a*2.0 +b*3.0+c*5.0);
        media=total/10.0;
             
         printf("%.1f\n",media);
        
        }
     return 0;
    } 
