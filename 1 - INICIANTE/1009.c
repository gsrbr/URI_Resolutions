#include <stdio.h>
 
int main() {
	
	char nome[100];
	double s,v;
	
	scanf("%s%lf%lf",nome,&s,&v);
	
	
	s=(s+(v*0.15));
	
	printf("TOTAL = R$ %.2lf\n",s);
	
    return 0;
}
