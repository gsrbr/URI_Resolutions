#include <stdio.h>

int main()
{
    
    int e,c,a,b,aux;
    
    scanf("%d",&e);
    
    c=1;
    
    a=0;
    b=1;
    
    while(c<=e){
        if(c==1){
            printf("%d ",a);
        }else if (c==2){
            printf("%d",b);
        }else{
            aux=b;
            b=a+b;
            a=aux;
            printf(" %d",b);
        }
        
        c++;
        
    }
    
    printf("\n");

    return 0;
}
