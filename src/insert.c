#include "head.h"
node_t *insert_rear (node_t *head)
{
    node_t *tmp = head;
    node_t *new = NULL;
    new = get_node(new);

    // 1. List is empty
    if (head == NULL) 
    {
	head = new;
	return head;		
    }

    // 2. If List is not empty
    if (head != NULL)
    {
	tmp = head;
	while (tmp->next != NULL)
	    tmp = tmp->next;
	tmp->next = new;
    }
    return head;
}

node_t *insert_front (node_t *head)
{
    node_t *new = NULL;
    new = get_node(new);

    // 1. List is empty
    if (head == NULL) 
    {
	printf("\t\tList is Empty\n");
	head = new;
	return head;		
    }

    // 2. If List is not empty
    new->next = head;
    head = new;
    return head;
}

node_t *insert_sorted (node_t *head) 
{
	node_t *tmp, *new = NULL;
	new = get_node(new);
	
	tmp = head;

	/* If only one element in the List */
	if (head == NULL)
	{
	    head = new;
	    return head;
	}

	while (tmp->next != NULL)
	{
	    if (new->val > tmp->val)
	    {
		new->next = tmp->next;
		tmp->next = new;
	    }
		tmp = tmp->next;
	}
	return head;
}
