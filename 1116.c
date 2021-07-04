
#include <stdio.h>

int main()
{
    int qtd,x,y;
    double z;
    
    scanf("%d",&qtd);
    while(qtd--){
      
        scanf("%d%d",&x,&y);
         z= (double) x/y;
        
        if(y==0 && x!=0){
            printf("divisao impossivel\n");
        } else{
           
           printf("%.1lf\n",z); 
            
        }
        
    }
   

    return 0;
}
