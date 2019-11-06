#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
	int x1,y1,x2,y2,r1,r2;//declaration of variables x1,y1 & x2,y2 are for coordinates
	double dis;//for storing distance between (x1,y1) & (x2,y2)
	scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&r1,&r2);//inputing the required values
	dis=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	if(r1>=0 && r2>=0)
		if(dis<=r1+r2 && abs(r1-r2)<=dis)
			printf("YES\n");
		else
			printf("NO\n");
		
	else
		printf("Invalid input\n");
	return 0;
}
