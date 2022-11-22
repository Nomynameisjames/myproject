#include "list.h"

/* Given a node prev_node, insert a new node after the given
prev_node */
void insertAfter(list_t *prev_node, int new_data)
{
	/*1. check if the given prev_node is NULL */
	if (prev_node == NULL) {
		printf("the given previous node cannot be NULL");
		return;
	}

	/* 2. allocate new node */

	newnode	= (list_t *)malloc(sizeof(list_t));

	/* 3. put in the data */
	newnode->num = new_data;

	/* 4. Make next of new node as next of prev_node */
	newnode->nextptr = prev_node->nextptr;

	/* 5. move the next of prev_node as new_node */
	prev_node->nextptr = newnode;
}

