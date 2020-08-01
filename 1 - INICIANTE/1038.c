#include <stdio.h>
 
int main() {
 
int i,q;
float r;

scanf("%d%d",&i,&q);

if (i==1){
    r=q*4.00;
}else if(i==2){
    r=q*4.50;
}else if(i==3){
    r=q*5.00;
}else if(i==4){
    r=q*2.00;
}else if(i==5){
    r=q*1.50;
}

printf("Total: R$ %.2lf\n",r);
 
    return 0;
}
