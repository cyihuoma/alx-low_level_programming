#include "lists.h"
/**
 * find_listint_loop - function that detects and returns the node
 * @head: a pointer to the head of the list
 *
 * Return: the node
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	tortoise = head;
	hare = head;

	while (hare != NULL && hare->next != NULL)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			return (tortoise);
		}
	}
	return (NULL);
}
