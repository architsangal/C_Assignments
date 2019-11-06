#include <stdio.h>

struct student
{
	char name[1000];
	char roll_num[100];
	int age;
	int marks;
};

int main(void)
{
	int n;
	scanf("%d",&n);

	struct student arr[n];//array of structure student

	for (int i = 0; i < n; ++i)
	{
		scanf("%s %s %d %d",arr[i].name,arr[i].roll_num,&arr[i].age,&arr[i].marks);
	}
	for (int i = 0; i < n; ++i)
	{
		printf("%s\n%s\n%d\n%d\n",arr[i].name,arr[i].roll_num,arr[i].age,arr[i].marks);
	}

	return 0;
}
