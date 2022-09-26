#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, bai, shi, ge;
	scanf("%d", &a);
	bai = a / 100;
	shi = a % 100 / 10;
	ge = a % 100 % 10;
	b = bai + shi * 10 + ge * 100;
	printf("%d", b);
	return 0;
}