#include "head.h"
/*  Delete a Node from Rear:
Conditions to Handle-
1. Check if List is Empty
2. Check if only one node is left in list
3. Do Normal Delete from Rear  
*/
node_t *delete_rear(node_t *head)
{
	/* 1. If List is empty */
	if (NULL == head) {
		printf("Cannot Delete, List is Empty\n");
		return head;
	}

	/* 2. If only one node is remaining */
	if (NULL == head->next)
	{
		free_node(head);
		head = NULL;
		return head;
	}

	node_t *prev = NULL, *cur = head;
	while (cur->next != NULL)
	{
		prev = cur;
		cur = cur->next;
	}
	free_node (cur);
	prev->next = NULL;
	return head;
}

/* 
Delete a Node from Front:
Conditions to Handle-
1. Check if List is Empty
2. Do Normal Delete from Front 
*/
node_t *delete_front(node_t *head)
{
	/* If List is Empty */
	if (head == NULL) {
		printf("Cannot Delete, List is empty\n");
		return head;
	}

	node_t *tmp, *ptr;  // Store addr of head in ptr for freeing.
	tmp = ptr = head;
	tmp = tmp->next;    // Increment tmp to next node.

	head = tmp;
	free_node (ptr);
	return head;
}
