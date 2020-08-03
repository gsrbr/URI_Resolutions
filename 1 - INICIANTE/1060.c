#include <stdio.h>
 
int main() {
    
    int b,c;
    
    double a;
    
    b=1;
    
    c=0;
 
    while(b<=6){
    
        scanf("%lf",&a);
        
        if(a>0){
        
            c++;
        }
        b++;
    }
 
    printf("%d valores positivos\n",c);
    
    return 0;
}
