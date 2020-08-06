#include <stdio.h>

int main()
{
    
    int n,a,l,g,count;
    
    scanf("%d",&n);
    
    int r[n];
    
    count=0;
    
    while(count<n){
        scanf("%d%d%d",&a,&l,&g);
        if (a>=200 && a<=300 &&  l>=50 && g>=150){
            //printf("Sim\n");
            r[count]=1;
        }else{
            //printf("Nao\n");
            r[count]=0;
        }
        
        count++;
    }
    
    count=0;
    
    while(count<n){
        if (r[count]==1){
            printf("Sim\n");
        }else{
            printf("Nao\n");
        }
        
        count++;
        
    }
    


    return 0;
}
