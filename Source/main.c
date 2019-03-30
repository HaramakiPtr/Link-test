#include <stdio.h>
#include <stdlib.h>
#include "test.h"

int main(void)
{
	printf("Please enter your name:");
	char String[20];
	scanf("%s",String);
	char* result1 = returnMsg(String);
	printf("%s",result1);
	free(result1);
	return 0;
}