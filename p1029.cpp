#define _CRT_SECURE_NO_WARNINGS
#if 01
#include <stdio.h>
int main(void)
{
	long double d;
	scanf("%llf", &d);
	printf("%.11llf", d);
	return 0;
}
#endif
