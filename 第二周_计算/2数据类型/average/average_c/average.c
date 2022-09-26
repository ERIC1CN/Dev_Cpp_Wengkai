#include<stdio.h>

int main()
{
	int a, b;
	scanf_s("%d %d", &a, &b);
	double c;
	c = (a + b) / 2.0;
	printf("%d和%d的平均值为%f\n", a, b, c);
	return 0;
}