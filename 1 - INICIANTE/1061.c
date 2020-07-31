#include <stdio.h>

int main()
{
int d1, d2, m1, m2, h1, h2, s1, s2, d, h, m, s, soma;

char temp[100];

  scanf("%s %d", temp,&d1);
  
  scanf("%d%s%d%s%d", &h1,temp,&m1,temp,&s1);

  scanf("%s %d", temp,&d2);
  
  scanf("%d%s%d%s%d", &h2,temp,&m2,temp,&s2);
  
  
  if (d1==d2){
      d=0;
      int v,t,t1,t2;
      t1=(h1*60*60)+(m1*60)+s1;
      t2=(h2*60*60)+(m2*60)+s2;
      t=t2-t1;
      h=t/3600;
      t=t-(h*3600);
      m=t/60;
      t=t-(m*60);
      s=t;
      if (h==0 && m==0){
        d=0;
        h=0;
        m=0;
        s=0;
      }
  }
  else if (d2<d1){
      d=0;
      h=0;
      m=0;
      s=0;
  }
  else {
      int v,t,t1,t2;
      t1=86400-((h1*60*60)+(m1*60)+s1);
      t2=((h2*60*60)+(m2*60)+s2);
      if ((d2-d1)==1){
        d=0;
        t=t2+t1;
        if (t>=86400){
            d=1;
            t=(t-86400);
        }
        h=t/3600;
        t=t-(h*3600);
        m=t/60;
        t=t-(m*60);
        s=t;
      }else{
        //d=d2-d1-2;
        //t=(t2+t1)-(d*86400);
        d=(d2-d1-1)*86400;
        t=t2+t1+d;
        d=t/86400;
        t=t-d*86400;
        h=t/3600;
        t=t-(h*3600);
        m=t/60;
        t=t-(m*60);
        s=t;  
      }
  }
  
  printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", d,h,m,s);
  
  //printf("%d dia(s)\n",d);
  //printf("%d hora(s)\n",h);
  //printf("%d minuto(s)\n",m);
  //printf("%d segundo(s)\n",s);

    return 0;
}
