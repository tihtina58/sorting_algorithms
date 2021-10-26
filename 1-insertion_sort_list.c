#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly
 * linked list of integers in ascending order using
 * the Insertion sort algorithm;
 *
 * @list: dbl pointer to head of dbl linked list
 * to sort.
 */

void insertion_sort_list(listint_t **list)
{
listint_t *node_to_sort = NULL, *next_to_sort = NULL;
if (list == NULL)
return;
node_to_sort = (*list)->next;
while (node_to_sort != NULL)
{
next_to_sort = node_to_sort->next;
while (node_to_sort->prev != NULL)
{
if ((node_to_sort->prev)->n > node_to_sort->n)
{
swap_nodes(node_to_sort->prev);
/*Set the head*/
while ((*list)->prev != NULL)
*list = (*list)->prev;
print_list((const listint_t *) *list);
}
else
break;
}
node_to_sort = next_to_sort;
}
}

/**
 * swap_nodes - swap consecutive nodes of
 * a dobble linked list. In case of swap
 * between head and another node, you must
 * manually, point to the new head.
 *
 * @list: pointer to the first node
 * of two to swap in the dobble linked list.
 *
 * Return: 1 if it success 0 if not.
 */

int swap_nodes(listint_t *list)
{
listint_t *a = NULL, *b = NULL, *aux = NULL;
if (list == NULL)
return (0);
if (list->next == NULL)
return (0);
a = list;
b = list->next;
aux = b->next; /*let's swap the nodes.*/
b->next = a;
b->prev = a->prev;
a->next = aux;
a->prev = b;
if (b->prev != NULL)
(b->prev)->next = b;
if (a->next != NULL)
(a->next)->prev = a;
return (1);
}
