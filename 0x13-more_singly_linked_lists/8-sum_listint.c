#include "lists.h"

/**
 * sum_listint -returns the sum of all the data (n) of a listint_t linked list.
 * @head: the first elemnt in the linked list
 *
 * Return: sum of all the data (n) of a linked list
 *  and if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
