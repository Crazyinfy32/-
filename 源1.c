#include<stdio.h>
int main()
{
	int a = 10;
	//int b = a++;
	//int b = ++a;
	//int b = --a;
	int b = a--;
	printf("a=%d\n,b=%d\n", a, b);
	return 0;
}