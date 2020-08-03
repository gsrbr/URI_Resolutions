#include <stdio.h>
#include <math.h>
 
int main() {
 
	double a,b,c,delta,r;
	
	scanf("%lf%lf%lf",&a,&b,&c);
	
	delta=((b*b)-(4*a*c));
	if (a==0){
		delta=0;
	}
	if (delta<0){
	    printf("Impossivel calcular\n");
	}else if (delta==0){
	    printf("Impossivel calcular\n");
	}else{
		delta=sqrt(delta);
	    r=(-b+delta)/(2.0*a);
	    printf("R1 = %.5lf\n",r);
	    r=(-b-delta)/(2.0*a);
	    printf("R2 = %.5lf\n",r);
	}
 
    return 0;
}
