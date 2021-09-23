#define _CRT_SECURE_NO_WARNINGS
#if 01
#include <stdio.h>
#include <malloc.h>
int main(void)
{
	char *data = (char *) malloc(sizeof(char) * 2000);
	fgets(data, 2000, stdin);
	printf("%s", data);
	return 0;
}
#endif
