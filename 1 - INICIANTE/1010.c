#include <stdio.h>
 
int main() {
 
	int c1,c2,q1,q2;
	double p1,p2,pf;
	
	scanf("%d%d%lf%d%d%lf",&c1,&q1,&p1,&c2,&q2,&p2);
	
	pf=(p1*q1)+(p2*q2);
	
	printf("VALOR A PAGAR: R$ %.2lf\n",pf);
 
    return 0;
}
