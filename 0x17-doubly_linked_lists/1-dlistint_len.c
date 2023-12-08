#include "lists.h"

/**
 * dlistint_len - the number of elements all 11 linked dlistint_t list.
 * @h: Head of dlistint_t list.
 *
 * Return: The number of elements in the dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
