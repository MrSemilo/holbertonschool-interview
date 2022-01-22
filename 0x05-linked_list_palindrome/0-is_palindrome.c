#include "lists.h"

/**
 * is_palindrome - is a function.
 * @head: is a head the list
 * Return: 1 of 0
 **/

int is_palindrome(listint_t **head)
{
int list[1000000];
long n = 0, i;
listint_t *node;

	if (head == NULL)
		return (0);
	if (*head == NULL)
		return (1);
	if ((*head)->next == NULL)
		return (1);

	node = *head;
	while (node != NULL)
	{
		list[n] = node->n;
		node = node->next;
		n++;
	}

	for (i = 0; i < (n / 2); i++)
	{
		if (list[i] != list[n - i - 1])
			return (0);
	}

	return (1);
}
