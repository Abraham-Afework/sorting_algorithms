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
	if (array == NULL || size < 2)
	{
		return;
	}
	if (is_sorted(array, size))
	{
		return;
	}
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

	index = lb - 1;

	for (j = lb; j <= hb - 1; j++)
	{
		if (array[j] <= array[hb])
		{
			index++;
			swap(&array[index], &array[j], array, size);

		}
	}

	swap(&array[index + 1], &array[hb], array, size);
	/*print_array(array, size);*/
	return (index + 1);
}
/**
 * swap - a function that swaps to numbers
 * @first: the first number to be swapped on the second index
 * @second: the second number to be swapped on the first index
 * @array: array containing unsorted numbers(unsorted array)
 * @size: the size of the array
 *
 */

void swap(int *first, int *second, int *array, size_t size)
{
	int temp;

	temp = *first;
	*first = *second;
	*second = temp;

	if (temp != *first)
		print_array(array, size);
}
/**
 * is_sorted - a function that checkes if an array is sorted
 * @array: array containing unsorted numbers(unsorted array)
 * @size: the size of the array
 *
 * Return: 1 if array is sorted else 0
*/
int is_sorted(int *array, size_t size)
{	size_t i;
	for (i = 0; i < size - 1; i++)
	{
		if (array[i] > array[i + 1])
		{
			return (0);
		}
	}
	return (1);
}
