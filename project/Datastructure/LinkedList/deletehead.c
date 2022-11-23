#include "list.h"

void deletehead(list_t *temp)
{


	if (head->nextptr  == NULL)
		printf("list is empty");
	else
	{
		temp = head;
		temp = head->nextptr;
		free(temp);
	}
}
