#include <stdio.h>
int main()
{

	int x = 4;
	int y = 3;
	char c = 'h';
	
	if (y == 7 || x < 10)
	{
		if (y > x)
		{
			printf("You won't see me!");
		}
		else
		{
			int i = 0;
			while(i < y)
			{
				i++;
				printf("%c\t", 65 + i);
			}
			printf("1\t2\t3\n");
		}
	}
	return 0;
}			
