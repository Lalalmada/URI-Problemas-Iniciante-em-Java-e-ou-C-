#include <stdio.h>

int main()
{
    int valor;
    valor= 1;

    while(valor != 2002)
    {
        scanf("%d", &valor);
        if(valor == 2002){
            printf("Acesso Permitido\n" );
            return 0;
        }else{
            printf("Senha Invalida\n" );
        }
    }
    return 0;
}
