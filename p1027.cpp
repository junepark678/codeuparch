#define _CRT_SECURE_NO_WARNINGS
#if 01
#include <stdio.h>
int main(void)
{
	int y, m, d;
	scanf("%d.%d.%d", &y, &m, &d);
	printf("%02d-%02d-%04d", d, m, y);
	return 0;
}
#endif
