#include <stdio.h>
int main(void)
{int s,g;
 scanf("%d%d",&g,&s);
 if(g<s)
   {float a=g;
    g=s;
    s=a;
   }
 if(!(g<=0 || s<=0))
  {int r;
   r=g%s;
   printf("%d\n",r);
  }
 else printf("Invalid input\n");  
return 0;
}
