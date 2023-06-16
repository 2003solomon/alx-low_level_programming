#include "lists.h"

/**
 * print_dlistint - a func that prints all the elements
 * of a dlistint_t list.
 *
 * @h: pointer, pointing to the head
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *holder;
	size_t iterator = 0;

	hol = h;
	while (hol != NULL)
	{
		printf("%d\n", holr->n);
		hol = hol->next;
		iterator++;
	}
	return (iterator);
}
