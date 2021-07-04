#include <stdio.h>

 
    int main() {
    
          double N1,N2,N3,N4;
    
    scanf("%lf",&N1);
    scanf("%lf",&N2);
    scanf("%lf",&N3);
    scanf("%lf",&N4);
        
        double Media=(2*N1 +3*N2 +4*N3+N4)/10;
        double exame,novaMedia;
        
        // media maior ou igual a 7.0
        if(Media>=7.0){
       printf("Media: %.1lf\n", Media);
       printf("Aluno aprovado.\n");
        } 
        
        
        //media menor que 5
         if(Media<5.0){
            printf("Media: %.1lf\n",Media);
            printf("Aluno reprovado.\n");
        }
        

       //media entre 5 e 6.9
        if(Media>=5.0 && Media<=6.9){
            printf("Media: %.1lf\n",Media);
            printf("Aluno em exame.\n");
            scanf("%lf",&exame);
            novaMedia= (exame+Media)/2;
            printf("Nota do exame: %.1lf\n",exame);
            
            if(novaMedia<=4.9){
            printf("Aluno reprovado.\n");
             printf("Media final: %.1lf\n",novaMedia);
            
        } else{
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n",novaMedia);
        }
        
        }
        
   return 0;
}
