/*
Prototype: node_t *reverse_n_list (node_t *head, int n)
where 'head' is the head of the list
and 'n' is the set of nodes to reverse
return value : head of list

Description: Reverse nodes in linked list in sets on 'n'
Ex: if List is: 1->2->3->4->5->6  
	for n=2 Output 5->6-3->4->1->2
	for n=3 Output 4->5->6->1->2->3
*/

#include "head.h"
node_t *reverse_n_list (node_t *head, int n)
{
    node_t *tmp, *prev   = NULL;
    node_t *current = head;
    node_t *next = NULL;
    int count;    

    while (current != NULL)
    {
	tmp = current;

	/* (n-1) to save last but one node */
	count = n - 1;  

	/* traverse 'n-1' times */
	while (count--)
	{
	    /* If total number of nodes are odd */
	    if (NULL == tmp->next)
	    {
		tmp->next = prev;
		head = tmp;
		return head;
	    }

	    tmp = tmp->next;
	}

	next = tmp->next;
	tmp->next = prev;   

	prev = current;
	current = next;
    }

    head = prev;
    return head;
}


#if 0
/* Test main */
int main ()
{
    node_t g = {7, NULL};
    node_t f = {6, &g};
    node_t e = {5, &f};
    node_t d = {4, &e};
    node_t c = {3, &d};
    node_t b = {2, &c};
    node_t a = {1, &b};

    int n=2;
    node_t *tmp = reverse_n_list(&a, n);
    view_list(tmp);
    return 0;
}
#endif
