#include "lists.h"

/**
 * is_palindrome - is a function.
 * @head: is a head the list
 * Return: 1 of 0
 **/

int is_palindrome(listint_t **head)
{
listint_t *current;
int list[100000];
long n = 0;

if (head == NULL)
{
return (0);
}
if (*head == NULL)
{
return (1);
}
if ((*head)->next == NULL)
{
return (1);
}

current = *head;
while (current != NULL)
{
list[n] = current->n;
current = current->next;
n++;
}

for (int i = 0; i < (n / 2); i++)
{
if (list[i] != list[n - i - 1])
{
return (0);
}
}
return (1);
}
