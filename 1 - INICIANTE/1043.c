#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
float a,b,c,m;

scanf("%f%f%f",&a,&b,&c);

if (abs(b-c)<a && a<(b+c) && abs(a-c)<b && b<(a+c) && abs(a-b)<c && c<(a+b)){
    m=a+b+c;
    printf("Perimetro = %.1f\n",m);
}else{
    m=((a+b)*c)/2;
    printf("Area = %.1f\n",m);
}

    return 0;
}
