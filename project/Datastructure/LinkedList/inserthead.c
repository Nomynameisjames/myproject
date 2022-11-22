#include "list.h"

void push(list_t **head_ref, int new_data)
{
	/* 1. allocate node */
	 newnode = (list_t *) malloc(sizeof(list_t));

	/* 2. put in the data */
	newnode->num = new_data;

	/* 3. Make next of new node as head */
	newnode->nextptr = (*head_ref);

	/* 4. move the head to point to the new node */
	(*head_ref) = newnode;
}

