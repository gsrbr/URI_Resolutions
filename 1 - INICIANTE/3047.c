#include <stdio.h>
 
int main() {
 
int a,b,c,d;

scanf("%d%d%d",&a,&b,&c);

if(a>=40 && a<=110 && b>=1 && c>=1 && b!=c){
    d=a-(b+c);
    if(d>=b && d>=c){
        printf("%d\n",d);
    }else if(c>=b && c>=d){
        printf("%d\n",c);
    }else if(b>=c && b>=d){
        printf("%d\n",b);
    }
    
}
 
    return 0;
}
