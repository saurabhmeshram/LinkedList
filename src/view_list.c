#include "head.h"
void view_list (node_t *head)
{
	if (NULL == head)
	{
		printf("List is Empty\n");
		return;
	}	
	node_t *tmp = head;

	printf("Contents of List:\n");
	while(tmp != NULL) 
	{
		printf("[%d]", tmp->val);
		tmp = tmp->next;
	}
	printf("\n");
	return;
}
