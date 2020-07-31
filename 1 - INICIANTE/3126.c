#include <stdio.h>
 
int main() {
 
int n,p,count;

scanf("%d",&n);

int c[n];

count=0;

while(count<n){
	scanf("%d",&c[count]);
	p=p+c[count];
	count++;
}

printf("%d\n",p);
 
    return 0;
}
