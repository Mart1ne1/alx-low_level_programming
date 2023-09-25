#include "lists.h"

/**
 * get_nodeint_at_index -returns the nth node of a listint_t linked list.
 * @head: first node in the linked list
 * @index:  the index of the node, starting at 0
 *
 * Return: nth node of a linked list or if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp &&  i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
