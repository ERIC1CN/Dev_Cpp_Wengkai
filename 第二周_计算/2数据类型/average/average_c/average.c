#include<stdio.h>

int main()
{
	int a, b;
	scanf_s("%d %d", &a, &b);
	double c;
	c = (a + b) / 2.0;
	printf("%d��%d��ƽ��ֵΪ%f\n", a, b, c);
	return 0;
}