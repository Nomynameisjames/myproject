#include <stdio.h>

void add(int x, int y)
{

	printf("%d + %d = %d\n",x, y, x+y);
}

void sub(int x, int y)
{
	 printf("%d - %d = %d\n",x, y, x-y);
}

void mul(int x, int y)
{
	 printf("%d * %d = %d\n",x, y, x*y);
}

int main ()
{
	void (*funct[])(int, int) = {add, sub, mul};
	int choice;
	int x, y;
	printf("\n----press 0 for addition, 1 for sub and 2 for mul----\n");
	scanf("%d", &choice);
	printf("enter value for x and y respectively\n");
	scanf("%d %d", &x, &y);
	if (choice > 2)
		printf("out of range");
	else
	{
		(*funct[choice])(x, y);
	}
	return 0;
}
