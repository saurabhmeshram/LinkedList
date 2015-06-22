#include "head.h"
int main (void)
{
	system ("clear");
    node_t *head = NULL;
    int choice = 0;

    while (TRUE)
    {
	print_menu();
	scanf("%d", &choice);

	switch(choice)
	{
	    case 1:
		head = insert_rear(head);
		view_list(head);
		break;
	    case 2:
		head = insert_front(head);
		view_list(head);
		break;
	    case 3:
		head = delete_rear(head);
		view_list(head);
		break;
	    case 4:
		head = delete_front(head);
		view_list(head);
		break;
	    case 5:
		print_reverse(head);
		printf("\n");
		break;
//	    case 6: 
//		link_sort1(head);
//		view_list(head);
//		break;
	    case 7:
		head = reverse_list_iterative(head);
		view_list(head);
		break;
	    case 8:
		head = reverse_list_recursive(head);
		view_list(head);
		break;
	    case 9:
		head = swap_alternate(head);
		view_list(head);
		break;
	    case 10:
		head = insert_sorted(head);
		view_list(head);
		break;

	    case 100:
		view_list(head);
		break;
	    default : printf("Invalid Choice\n");
	}
    }
    return 0;
}
