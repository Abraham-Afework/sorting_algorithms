#include<stdio.h>
#include<stdlib.h>
#include"sort.h"
/**
 * insertion_sort_list - a function that sorts a number in ascending order
 * @list: list of numbers to be orderd
 *
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp;

	if (*list == NULL || (*list)->next == NULL)
	{
		return;
	}

	temp = (*list)->next;


	while (temp != NULL)
	{
		listint_t *holder;

		holder = temp;

		while (holder->prev != NULL && holder->n < holder->prev->n)
		{
			holder->prev->next = holder->next;

			if (holder->next != NULL)
			{
				holder->next->prev = holder->prev;
			}
			holder->next = holder->prev;
			holder->prev = holder->prev->prev;
			holder->next->prev = holder;

			if (holder->prev == NULL)
			{
				*list = holder;
			}
			else
			{
				holder->prev->next = holder;
			}
			print_list(*list);
		}
		temp = temp->next;
	}
}
