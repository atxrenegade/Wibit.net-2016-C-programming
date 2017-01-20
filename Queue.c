#include <stdio.h>
#include "Queue.h"

int main()
{
	struct queue q;
	initQueue(&q);
	for(int i = 0; i < 5; i++)
		pushQueue(&q, i + 65);
	
	char* pValue = popQueue(&q);
	while(pValue != NULL)
	{
		printf("%c\n", *pValue);
		pValue = popQueue(&q);
	}
	return 0;
}

