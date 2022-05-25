#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - prints all the elements in list_t list.
 * @h: defines a singly linked list.
 * Return: exact number of elements in the list.
 */

size_t print_list(const list_t *h)

{

size_t nelem;
nelem = 0;
while (h != NULL)

{

if (h->str == NULL)

printf("[%d] %s\n", 0, "(nil)");

else
printf("[%d] %s\n", h->len, h->str);

h = h->next;

nelem++;

}

return (nelem);
}
