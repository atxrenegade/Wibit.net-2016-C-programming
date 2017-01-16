#include <stdio.h>
int main()
{
	int l = 65;
	int u = 97;
	
	for(int i = l; i < (l + 26); i++)
	printf("%d = %c\n", i, i);
	return 0;
}
