#include <stdio.h>
 
int main() {
 
    int a,b;
    
    
    while(b==0){
        scanf("%d",&a);
        if(a==2002){
            printf("Acesso Permitido\n");
            b++;
        }else{
            printf("Senha Invalida\n");
        }
    }
    
 
    return 0;
}
