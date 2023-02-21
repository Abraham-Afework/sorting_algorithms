#include<stdio.h>
#include"sort.h"
/**
 *
 *
 *
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	
	for (i = 0; i < size; i++)
	{
		
		for (j = i; j < size; j++)
		{
			if (array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				
				
			}

		}
		print_array(array,size);
	}
		
}
