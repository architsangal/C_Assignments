#include <stdio.h>
int main(void)
{int a,b,c,gcd;
 scanf("%d%d",&a,&b);
 if(a<0) a=-a;
 if(b<0) b=-b;
 if(b>a)
 {int temp=a;
  a=b;
  b=temp;
 }
 if(a==0 && b==0)
  printf("Invalid input\n");
 else
 {if(b!=0)
  {while(b!=0)
   {c=a%b;
    a=b;
    b=c;
   }
   gcd=a;
   printf("%d\n",gcd);
  }
  else
   printf("%d\n",a);
 }
}
