#include <stdio.h>
 
int main() {
 
float s;

scanf("%f",&s);

if (s>=0 && s<=25){
    printf("Intervalo [0,25]\n");
}else if (s>25 && s<=50){
    printf("Intervalo (25,50]\n");
}else if (s>50 && s<=75){
    printf("Intervalo (50,75]\n");
}else if (s>75 && s<=100){
    printf("Intervalo (75,100]\n");
}else{
    printf("Fora de intervalo\n");
}
 
    return 0;
}
