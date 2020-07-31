#include <stdio.h>
 
int main() {

int d,v,cem,cin,vin,dez,cinco,dois,um;

scanf("%d",&v);

d=v;

cem=v/100;

v=v-(100*cem);

cin=v/50;

v=v-(50*cin);

vin=v/20;

v=v-(20*vin);

dez=v/10;

v=v-(10*dez);

cinco=v/5;

v=v-(5*cinco);

dois=v/2;

v=v-(2*dois);

um=v;

printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",d,cem,cin,vin,dez,cinco,dois,um);

    return 0;
}
