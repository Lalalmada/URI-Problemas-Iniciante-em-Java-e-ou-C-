#include <stdio.h>

int main(){
 
double salario;
 scanf("%lf", &salario);
 
 if(salario>=0 && salario<=400.00){
     
     double reajuste=1.15*salario;
     double reajusteGanho= 0.15*salario;
     printf("Novo salario: %.2lf\n", reajuste);
     printf("Reajuste ganho: %.2lf\n",reajusteGanho);
     printf("Em percentual: 15 %%\n");
 }
 
  if(salario>=400.01 && salario<=800.00){
     
     double reajuste=1.12*salario;
     double reajusteGanho= 0.12*salario;
     printf("Novo salario: %.2lf\n", reajuste);
     printf("Reajuste ganho: %.2lf\n",reajusteGanho);
     printf("Em percentual: 12 %%\n");
 }
 
 if(salario>=800.01 && salario<=1200.00){
     
     double reajuste=1.10*salario;
     double reajusteGanho= 0.10*salario;
     printf("Novo salario: %.2lf\n", reajuste);
     printf("Reajuste ganho: %.2lf\n",reajusteGanho);
     printf("Em percentual: 10 %%\n");
 }
 
 if(salario>=1200.01 && salario<=2000.00){
     
     double reajuste=1.07*salario;
     double reajusteGanho= 0.07*salario;
     printf("Novo salario: %.2lf\n", reajuste);
     printf("Reajuste ganho: %.2lf\n",reajusteGanho);
     printf("Em percentual: 7 %%\n");
 }
 
 if(salario>2000.00 ){
     
     double reajuste=1.04*salario;
     double reajusteGanho= 0.04*salario;
     printf("Novo salario: %.2lf\n", reajuste);
     printf("Reajuste ganho: %.2lf\n",reajusteGanho);
     printf("Em percentual: 4 %%\n");
 }



 return 0;
}
