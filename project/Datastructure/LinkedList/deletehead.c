#include "list.h"

void deletehead(list_t **head_ref, int key)
{


	if ((*head_ref)->num  == key)
		temp = (*head_ref);
		*head_ref = (*head_ref)->nextptr;
		free(temp);


}
