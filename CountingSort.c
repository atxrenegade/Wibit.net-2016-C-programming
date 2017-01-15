void countingSortArray(int arr[])
{

int i, min, max;
min = arr[0]; max = arr[0];
for(i = 1; i < SIZE; i++)
{
	if(arr[i] < min)
	min = arr[i];
	else if(arr[i] > max)
}

int range = max - min + 1;
int *count = calloc(range* sizeof(int), sizeof(int));

for(i = 0; i < range; i++)
	count[i] = 0;

for(i = 0; i < SIZE; i++)
	count[arr[i] - min] ++;
int z = 0;

	for(i = min; i <= max; i++)
		for(int j = 0; j < count[i - min]; j++)
			arr[z++] = i;
			
free(count);
}
	
