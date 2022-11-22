#include "list.h"

void createNodeList(int n)
{
    int i;
    int num;;
    head = (struct node *)malloc(sizeof(struct node));

    if(head == NULL) //check whether the fnnode is NULL and if so no memory allocation
    {
        printf(" Memory can not be allocated.");
    }
    else
    {
// reads data for the node through keyboard

        printf(" Input data for node 1 : ");
        scanf("%d", &num);
        head->num = num;
        head->nextptr = NULL; // links the address field to NULL
        temp = head;
// Creating n nodes and adding to linked list
        for(i=2; i<=n; i++)
        {
            newnode  = (struct node *)malloc(sizeof(struct node));
            if(newnode == NULL)
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node %d : ", i);
                scanf(" %d", &num);

                newnode->num = num;      // links the num field of fnNode with num
                newnode->nextptr = NULL; // links the address field of fnNode with NULL

                temp->nextptr = newnode; // links previous node i.e. tmp to the fnNode
                temp = temp->nextptr;
            }
        }
    }
}
