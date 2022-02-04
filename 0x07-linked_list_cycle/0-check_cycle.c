#include "lists.h"

/**
 * check_cycle - Checks cycle
 * @list: Linked list
 * Return: 0 or 1
 */
int check_cycle(listint_t *list)
{
	listint_t *head = list, *hare = list;

	while (head && hare)
	{
		if (!(hare->next) || !(hare->next->next))
			break;
		head = head->next;
		hare = hare->next->next;
		if (head == hare)
			return (1);
	}
	return (0);
}