#include "list.h"

int main()
{
    int n;
    int num;
    int num2 = 999;
    num = 1997;
	
		printf("\n\n Linked List : To create and display Singly Linked List :\n");
		printf("-------------------------------------------------------------\n");
		
    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    createNodeList(n);
    printf("\n Data entered in the list : \n");
    displayList();
 
    push(&head, num);
    printf("after insertion in head node\n");
    printf("\n-------------------------------------\n");
    displayList();

    insertAfter(newnode, num2);
    printf("insertion after head node\n");
    printf("\n-----------------------------------\n");
    displayList();

    deletehead(temp);
    printf("list after node is deleted\n");
    printf("\n------------------------------------\n");
    displayList();
    return 0;
} 

