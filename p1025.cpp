#define _CRT_SECURE_NO_WARNINGS
#if 01
#include <stdio.h>
#include <math.h>
int main(void)
{
	int a[5];
	for (int i = 0; i < 5; i++)
	{
		scanf("%1d", &a[i]);
	}

	for (int i = 0; i < 5; i++)
	{
		printf("[%d]\n", (int)(a[i] * pow(10, 4-i)));
	}

	return 0;
}
#endif
