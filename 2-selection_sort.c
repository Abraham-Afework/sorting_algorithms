#include<stdio.h>
#include"sort.h"
/**
 * selection_sort - a function that sorts an integer in ascending order
 * @array: array list of the number to be sorted
 * @size: the size of the array
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, temp_index;
	int temp, swap;

	for (i = 0; i < size - 1; i++)
	{
		temp_index = i;
		swap = 0;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[temp_index])
			{
				temp_index = j;
				swap = 1;
			}
		}
		if (swap)
		{
			temp = array[temp_index];
			array[temp_index] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}
}
