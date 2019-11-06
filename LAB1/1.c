#include <stdio.h>
int main(void)
{float r ;
 scanf("%f",&r);
 if(r<0)
  printf("Invalid input\n");
 else
 {float area =3.14*r*r;
  printf("%.2f \n",area);
  return 0;
 }
}
