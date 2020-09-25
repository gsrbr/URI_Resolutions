#include <stdio.h>
 
int main() {
 	int a,b,aa,ab,count,n=0;
 	
	scanf("%d%d",&aa,&ab);
	
	if(aa>=ab){
		b=aa;
		a=ab;
	}else{
		a=aa;
		b=ab;
	}
	for(count=a;count<=b;count++){
		if (count%13!=0){
			n=n+count;
		}
		}
	printf("%d\n",n);

 
    return 0;
}
