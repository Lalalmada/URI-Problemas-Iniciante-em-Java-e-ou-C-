#include <stdio.h>
#include <stdlib.h>

int main()

{

int i,qtd;
   scanf("%d",&qtd);
 
     for(i=1;i<=qtd;i++){
         
              printf("%d ",i);
              printf("%d ",i*i);
              printf("%d\n",i*i*i);
              
              printf("%d ",i);
              printf("%d ",i*i+1);
              printf("%d\n",i*i*i+1);
            }

return 0;

}
