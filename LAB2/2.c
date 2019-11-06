#include <stdio.h>
#include <math.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	if(n<=1)
	{
		printf("0\n");
		return 0;
	}
	int a[n+1];
	for(int i=0;i<=n;i++)
		a[i]=i;
	a[1]=0;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(a[i]!=0)
			for(int j=2*i;j<=n;j=j+i)
				a[j]=0;
	}
	int c=0;
	for(int i=2;i<=n;i++)
		if(a[i]!=0)
			c++;
	printf("%d\n",c);
        return 0;
}
