#include <stdio.h>
 
int main() {
    
    int a,e,count;
    
    count=0;
    
    scanf("%d",&e);
    
    while(count<e){
    
        scanf("%d",&a);
        
        if(a==0){
            
            printf("NULL\n");
            
        }else if (a%2==0){
            if(a>0){
                printf("EVEN POSITIVE\n");
            }else{
                printf("EVEN NEGATIVE\n");
            }
        }else{
            if(a>0){
                printf("ODD POSITIVE\n");
            }else{
                printf("ODD NEGATIVE\n");
            }
        }
        
        count++;
    }
    
    return 0;
}
