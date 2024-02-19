#include "sort.h"

/**
 * insertion_sort_list - a function that sorts a doubly linked list of,
 * integers in ascending order using the Insertion sort algorithm.
 *
 * @list: an input list to be sorted.
 *
 * Return: void.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *myList, *temp;

	if (!list)
		return;

	myList = *list;
	while (myList != NULL)
	{
		while (myList->next && (myList->n > myList->next->n))
		{
			temp = myList->next;
			myList->next = temp->next;
			temp->prev = myList->prev;

			if (myList->prev != NULL)
				myList->prev->next = temp;

			if (temp->next != NULL)
				temp->next->prev = myList;

			myList->prev = temp;
			temp->next = myList;

			if (temp->prev)
				myList = temp->prev;
			else
				*list = temp;

			print_list(*list);
		}
		myList = myList->next;
	}
}
