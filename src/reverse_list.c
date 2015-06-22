#include "head.h"

node_t *reverse_list_iterative (node_t *head)
{
    node_t* prev   = NULL;
    node_t* current = head;
    node_t* next = NULL;

    while (current != NULL)
    {
	next = current->next;
	current->next = prev;   
	prev = current;
	current = next;
    }
    head = prev;
    return head;
}

/* Recursively Reverse List 
Explanation:
1. http://stackoverflow.com/questions/2434411/linked-list-recursive-reverse
2. http://stackoverflow.com/questions/14080758/reversing-a-linkedlist-recursively-in-c
*/

node_t *reverse_list_recursive (node_t *head)
{ 
    /* Return  If List doesn't Exist or Empty */
    if (head == NULL)
	return NULL;

    /* Base Condition */
    if (head->next == NULL)
	return head;

    node_t *rest = reverse_list_recursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return rest;
}

#if 0
int main ()
{
    node_t c = {3, 0};
    node_t b = {2, &c};
    node_t a = {1, &b};

    node_t *tmp = reverse_list_recursive(&a);
    view_list(tmp);
    return 0;
}
#endif
