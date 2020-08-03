#include <stdio.h>
 
int main() {
 
	double a,b,c,r;
	
	scanf("%lf%lf%lf",&a,&b,&c);
	
	r=a*c/2;
	
	printf("TRIANGULO: %.3lf\n",r);
	
	r=3.14159*c*c;
	
	printf("CIRCULO: %.3lf\n",r);
	
	r=((a+b)*c)/2;
	
	printf("TRAPEZIO: %.3lf\n",r);
	
	r=b*b;
	
	printf("QUADRADO: %.3lf\n",r);
	
	r=a*b;
	
	printf("RETANGULO: %.3lf\n",r);

 
    return 0;
}
