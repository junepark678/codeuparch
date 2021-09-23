#define _CRT_SECURE_NO_WARNINGS
#if 01
#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[21];
	scanf("%s", a);
	for (int i = 0; i < strlen(a); i++)
	{
		printf("'%c'\n", a[i]);
	}
	return 0;
}
#endif
