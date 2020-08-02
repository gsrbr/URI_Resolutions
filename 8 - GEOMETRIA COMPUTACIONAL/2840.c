#include <stdio.h>
 
int main() {
 
int R,L,Q;

float v;

scanf("%d%d",&R,&L);

v = (4/3.0) * (3.1415*R*R*R);

Q=L/v;

printf("%d\n",Q);
    return 0;
}
