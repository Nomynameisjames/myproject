#include "list.h"


void displayList()
{
    if(head == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf(" Data = %d\n", temp->num);       // prints the data of current node
            temp = temp->nextptr;                     // advances the position of current node
        }
    }
}

