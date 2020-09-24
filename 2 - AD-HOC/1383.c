#include <stdio.h>
 
int main() {
 
int n,i,j,k,v=0, soma=285, con=0;
int mat[9][9];

scanf("%d",&n);

while (n>0){
	for (i=0; i<9; i++){
		for(j=0; j<9; j++){
			scanf("%d",&mat[i][j]);
		}
	}
		
		int sl[9],sc[9], sm[3][3];
		
		for(i=0; i<9; i++){
			sl[i] = sc[i] = sm[i/3][i%3] = 0;
		}
		for (i=0; i<9; i++){
			for (j = 0; j < 9; j++) {
            k = mat[i][j];
            k *= k;
            sl[i] += k;
            sc[j] += k;
            sm[i/3][j/3] += k;

            if (i == 8 && sc[j] != soma){
              break;
			}
			}
		  if (sl[i] != soma){
			  break;
		  }
		}
		  if(v == 0){
			  for (i=0;i<3;i++){
				  for (j=0;j<3;j++){
					  if(sm[i][j] != soma){
						  v=1;
					  }
				  }
			  }
		  }
		  else{
			  v=0;
		  }
		  con++;
		  n--;
		  //printf("%d",v);
		  if(v==0){
			  printf("Instancia %d\nSIM\n\n",con);
		  }
		  else{
			  printf("Instancia %d\nNAO\n\n",con);
		  }
		  v=0;
		}
 
    return 0;
}