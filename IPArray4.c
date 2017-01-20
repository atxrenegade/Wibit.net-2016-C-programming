#include <stdio.h>

#define ADDRESSES 5
#define OCTETS 4

int main()


{
	int ips[ADDRESSES][OCTETS] = 
	{
		{192, 168, 1, 1},
		{192, 168, 1, 100},
		{12, 68, 241, 3},
		{127, 0, 0, 1},
		{14, 15, 14, 9},
	};
	
	for (int i = 0; i < ADDRESSES; i++)
	{
		printf("%d.%d.%d.%d\n", ips[i][0], ips[i][1], ips[i][2], ips[i][3]);
	}
	return 0;
}
