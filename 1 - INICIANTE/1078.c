#include <stdio.h>

void tabuada(base,mult){
	printf("%d x %d = %d\n",mult,base,(mult*base));
	if(mult<10){
		tabuada(base,(mult+1));
	}
}
 
int main() {
	
 	int base;
    scanf("%d",&base);
    tabuada(base,1);
 
    return 0;
}
