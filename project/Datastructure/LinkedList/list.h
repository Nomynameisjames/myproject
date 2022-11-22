#ifndef _LIST_H_
#define _LIST_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int num;                        //Data of the node
    struct node *nextptr;           //Address of the next node
}list_t;

list_t *head, *temp, *newnode;
void createNodeList(int n); // function to create the list
void displayList();         // function to display the list
void push(list_t **head_ref, int new_data); // function to insert newnode at head
void insertAfter(list_t *prev_node, int new_data);
#endif
