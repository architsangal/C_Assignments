#include <stdio.h>

struct COMPLEX_NUM
{
	float x,y;
};

int main(void)
{
	struct COMPLEX_NUM num1,num2;// num1 and num2 are variables of structure COMPLEX_NUM
	scanf("%f %f",&num1.x,&num1.y);
	scanf("%f %f",&num2.x,&num2.y);
	struct COMPLEX_NUM sum,subtraction,multiplication;
	sum.x=num1.x+num2.x;
	sum.y=num1.y+num2.y;
	subtraction.x=num1.x-num2.x;
	subtraction.y=num1.y-num2.y;
	multiplication.x=num1.x*num2.x-num1.y*num2.y;
	multiplication.y=num1.y*num2.x+num1.x*num2.y;
	printf("%.2f + %.2fi\n",sum.x,sum.y);
	printf("%.2f + %.2fi\n",subtraction.x,subtraction.y);
	printf("%.2f + %.2fi\n",multiplication.x,multiplication.y);

	return 0;
}
