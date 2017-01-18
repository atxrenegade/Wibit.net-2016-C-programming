#include <stdio.h>

int fibonacci(int);

int main()
{
	int numOfCycle = 15;
	int i;
	for(i = 0; i < numOfCycle; i++)
	{
		printf("%d ", fibonacci(i));
		
	}
	printf("\n");
	return 0;
}

int fibonacci(int num)
{
	if((num == 0 || num == 1))
		return num;
	else
		return fibonacci(num - 1) + fibonacci(num - 2);
}
	
