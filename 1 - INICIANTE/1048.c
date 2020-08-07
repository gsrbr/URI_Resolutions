#include <stdio.h>
 
int main() {
    
    float a,r;
    int t;
    
    scanf("%f",&a);
    
    if(a>0 && a<=400){
        r=a+(a*0.15);
        t=15;
    }else if(a>400 && a<=800){
        r=a+(a*0.12);
        t=12;
    }else if(a>800 && a<=1200){
        r=a+(a*0.10);
        t=10;
    }else if(a>1200 && a<=2000){
        r=a+(a*0.07);
        t=7;
    }else if(a>2000){
        r=a+(a*0.04);
        t=4;
    }
    
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",r,(r-a),t);
    
    
    return 0;
}
