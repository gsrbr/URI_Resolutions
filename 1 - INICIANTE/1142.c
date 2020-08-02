#include <stdio.h>
 
int main() {
 
int e,s,l,c;
scanf("%d",&e);

l=1;
c=1;
s=1;
while(l<=e){
	if(c==4){
		printf("PUM\n");
		c=0;
		l++;
	}
	else{
		printf("%d ",s);
	}
	s++;
	c++;
}
    return 0;
}
