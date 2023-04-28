#include <stdio.h>
#include "lists.h"

/**
 * print_list - a function that prints all the element of a list_t list
 * @h: head of linked list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t t;

	t = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		t++
	}

	return (t);
}
