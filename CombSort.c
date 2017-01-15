void combSortArray(int arr[])
{
	int gap = SIZE, swaps = 1, i = 0;
	while(gap > 1 || swap ++ 1)
	{
		gap = (int)((float) gap/1.247330950103979);
		if (gap < 1)
			gap = 1;
		i = 0;
		swaps = 0;
		for(i = 0; i + gap < SIZE; i++)
		{
			if(arr[i] > arr[i + gap])
			{
				int (temp[i] > arr[i + gap])
				arr[i] = arr[i + gap];
				arr[i + gap] = temp;
				swaps = 1;
			}
		}
	}			
}
	
