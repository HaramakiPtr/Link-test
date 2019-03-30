#include <time.h>
#include <stdlib.h>
#include <string.h>

/*
** int returnRnd(int max);
** リンク練習(実験)の為使用しません。
*/
int returnRnd(int max)
{
srand((unsigned)time(0UL));
return rand() % 10;
}

char* returnMsg(char* str)
{
char hello[] = " Hello!";
char* offset = malloc((strlen(str)+strlen(hello))+1);
strcpy(offset,str);
strcat(offset,hello);
return offset;
}
