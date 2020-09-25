#include <stdio.h>
#include <stdlib.h>
 
int comparador(const void *a, const void *b) {
   return ( *(int*)a - *(int*)b );
}

void organiza(int x[]){
	qsort(x, 3, sizeof(int), comparador);
	int i;
	for( i = 0 ; i < 3; i++ ) {
      printf("%d\n", x[i]);
   }
}
 
int main () {
   int i, n[3],r[3];
   
	scanf("%d%d%d",&n[0],&n[1],&n[2]);
	
	r[0]=n[0];
	r[1]=n[1];
	r[2]=n[2];
	
	organiza(n);
   
   printf("\n");
      for( i = 0 ; i < 3; i++ ) {
      printf("%d\n", r[i]);
   }
 
   return(0);
}
