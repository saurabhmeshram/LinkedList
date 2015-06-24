#include "head.h"
node_t *get_node (node_t *ptr)
{
	ptr = malloc(sizeof(node_t));
	if (ptr == NULL)
	{
		printf("Malloc Failed\n");
		exit(EXIT_FAILURE);
	}
	printf("Enter Value for New node: ");
	scanf("%d", &ptr->val);	
	ptr->next = NULL;
	return ptr;
}

void free_node (node_t *ptr)
{
	if (ptr != NULL) 
	{ 
		free(ptr);
		ptr = NULL;	/* Explicitly assign NULL value */
		return;
	}
	return;
}

void print_menu (void)
{
	printf("\nLinked List Operations\n");
	printf("===================================================\n");
	printf("\nEnter your Choice\n" 
		"\t1. Insert at Rear End\n" 
		"\t2. Insert at Front End\n" 
		"\t3. Delete from Rear End\n" 
		"\t4. Delete from Front End\n" 
		"\t5. Print List in Reverse\n" 
		"\t6. Sort Values in List\n" 
		"\t7. Reverse List (Iterative)\n" 
		"\t8. Reverse List (Recursive)\n" 
		"\t9. Swap pair of nodes (Input should be even nodes)\n" 
		"\t10. Insert Sorted Order\n" 
		"\t11. Reverse List in set of 'n' nodes\n" 
		"\t98. Sort List and Remove Duplicates\n" 
		"\t99. Sort Nodes in List\n" 
		"\t100. View List\n"
		"Choice: ");
	return;
}
