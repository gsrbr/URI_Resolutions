#include <stdio.h>

void calc(linhas,linha){
	printf("%d %d %d\n",linha,linha*linha,linha*linha*linha);
	if(linha<linhas){
		calc(linhas,(linha+1));
	}
}
 
int main() {
	
 	int linhas;
    scanf("%d",&linhas);
    calc(linhas,1);
 
    return 0;
}
