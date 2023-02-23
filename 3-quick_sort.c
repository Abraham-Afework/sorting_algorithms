#include<stdio.h>
#include<stdlib.h>
#include"sort.h"
/**
 * quick_sort - function that sorts a given array in ascending order
 * @array: array containing unsorted numbers(unsorted array)
 * @size: the size of the array
 *
 */
void quick_sort(int *array, size_t size)
{
	recursion(array, 0, size - 1, size);
}
/**
 * recursion - function that iterates given array inorder to sort
 * @array: array containing unsorted numbers(unsorted array)
 * @lb: the lower bound of the array
 * @hb: the higher bound of the array
 * @size: the size of the array
 *
 */

void recursion(int array[], int lb, int hb, size_t size)
{
	if (lb < hb)
	{
		int pivot_index = partition(array, lb, hb, size);


		recursion(array, lb, pivot_index - 1, size);
		recursion(array, pivot_index + 1, hb, size);
	}

}
/**
 * partition - function that divides given array into partitions
 * description - the array is partitiond based on the lb and hb which \
 * compared to the pivot value
 * @array: array containing unsorted numbers(unsorted array)
 * @lb: the lower bound of the array
 * @hb: the higher bound of the array
 * @size: the size of the array
 * Return: index
 */
int partition(int array[], int lb, int hb, size_t size)
{
	int index, j;

	index = lb;
	for (j = lb; j < hb; j++)
	{
		if (array[j] <= array[hb])
		{
			swap(&array[index], &array[j]);
			index++;
		}
	}
	swap(&array[index], &array[hb]);
	print_array(array, size);

	return (index);
}
/**
 * swap - a function that swaps to numbers
 * @first: the first number to be swapped on the second index
 * @second: the second number to be swapped on the first index
 *
 */

void swap(int *first, int *second)
{
	int temp;

	temp = *first;
	*first = *second;
	*second = temp;
}