#include <stdio.h>
 
int main() {
    
    float a,b,c,d,e,m;
    
    scanf("%f%f%f%f",&a,&b,&c,&d);
    
    m=((a*2)+(b*3)+(c*4)+(d*1))/10;
    
    if (m<5){
        printf("Media: %.1f\n",m);
        printf("Aluno reprovado.\n");
    }
    else if (m>=7){
        printf("Media: %.1f\n",m);
        printf("Aluno aprovado.\n");
    }else{
        scanf("%f",&e);
        printf("Media: %.1f\n",m);
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1f\n",e);
        m=(m+e)/2;
        if(m>=5){
            printf("Aluno aprovado.\n");
        }else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n",m);
        
    }
    
    
    
    return 0;
}
