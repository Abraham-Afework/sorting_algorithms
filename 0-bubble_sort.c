#include<stdio.h>
#include"sort.h"
/**
 * bubble_sort - a function that sorts in ascending order
 * @array: contains the numbers to be sorted
 * @size: the size of the array
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, check;
	int temp;

	check = size;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < check; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
			}
		}
		check--;
	}
}

