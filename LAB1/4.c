#include <stdio.h>
#include <math.h>
int main(void)
{double a,b,c,r,im,r1,r2;
 scanf("%lf%lf%lf",&a,&b,&c);
 if(a!=0)
 {double dis=b*b-4*a*c;
  r=-b/(2*a);
  if(dis>=0)
  {r1=r+(sqrt(dis))/(2*a);
   r2=r-(sqrt(dis))/(2*a);
   printf("%.2lf %.2lf\n",r1,r2);
  }
  else
  {im=sqrt(-dis)/(2*a);
   printf("%.2lf+i%.2lf %.2lf-i%.2lf\n",r,im,r,im);
  }
 }
 else
 {r1=-c/b;
  printf("%.2lf\n",r1);
 }//printf("Invalid input\n");
 return 0;
}
