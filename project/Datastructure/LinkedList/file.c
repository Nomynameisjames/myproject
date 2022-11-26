#include "list.h"

int main()
{
    int n;
    int choice;
    int ex;
    int key;
  
	
		printf("\n\n Linked List : To create and display Singly Linked List :\n");
		printf("-------------------------------------------------------------\n");
		
    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    createNodeList(n);
    printf("\n Data entered in the list : \n");
    displayList();

	while (ex != 0)
	{
    		printf("\n enter{0} to insertnew nodein head, {1} to insert after headnode {2} to delete item from node\n");
		scanf("%d", &choice);
		if (choice == 0)
    		{	push();
    			printf("after insertion in head node\n");
    			printf("\n-------------------------------------\n");
    			displayList();
		}
		
    
		else if (choice == 1)
    		{	
			insertAfter(newnode);
    			printf("insertion after head node\n");
    			printf("\n-----------------------------------\n");
   			displayList();
		}
   
		else if (choice == 2)
    		{
			printf("enter what item in list to delete\n");
			scanf("%d", &key);
			deletehead(&head, key);
   			printf("list after node is deleted\n");
    			printf("\n------------------------------------\n");
    			displayList();
		}
		else
			printf("invalid option\n");
	printf("press 1 to loop through again 0 to quit: ");
	scanf("%d", &ex); 
	}
    return 0;
} 

