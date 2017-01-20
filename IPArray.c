#include <stdio.h>

int main()
{
	const int addresses = 5, octets = 4;
	int ips [addresses] [octets];
	ips[0][0] = 192; ips[0][1] = 168; ips[0][2] = 1; ips[0][3] = 1;
	
	for (int i = 0; i < addresses; i++)
	{
		for (int j = 0; j < octets; j++)
		printf("%d ", ips[i][j]);
		putchar('\n');
	}
	return 0;
}
