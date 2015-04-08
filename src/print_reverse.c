#include "head.h"
void print_reverse(node_t *head)
{
    /* Handle if List is empty */
    if (NULL == head)
    {
	printf("List is Empty\n");
	return;
    }

    /* Recursive Call - Base Condition */
    if (head->next != NULL)
	print_reverse(head->next);

    printf("[%d]", head->val);
}
