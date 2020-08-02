#include <stdio.h>
 
int main() {

int e,var,a,g,d;

a=0;
g=0;
d=0;
var=0;

while(var==0){
	scanf("%d",&e);
	
	if(e==4){
		var++;
	}else if(e==1){
		a++;
	}else if(e==2){
		g++;
	}else if(e==3){
		d++;
	}else{
	}
}
 
 
printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",a,g,d);
    return 0;
}
