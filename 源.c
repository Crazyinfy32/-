#include<stdio.h>
#include<string.h>
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int a = 10;
	int b = 20;
	int max = 0;
	max = Max(a, b);
	printf("最大的数是%d\n", max);
	return 0;
}
