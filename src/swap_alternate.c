#include "head.h"

node_t *swap_alternate (node_t *head)
{
    node_t *p1 = head;
    node_t *p2 = head->next;

    int tmp;

    while (p2->next != NULL) 
    {
	tmp = p1->val;
	p1->val = p2->val;
	p2->val = tmp;

	p1 = p1->next->next;
	p2 = p2->next->next;
    }

    /* Swap last two nodes as they dont get swapped in the Loop */
    tmp = p1->val;                                                  
    p1->val = p2->val;                                              
    p2->val = tmp; 
    return head;
}

#if 0 
int main ()                                                                     
{                                                                               
    node_t f = {6, 0};                                                          
//    node_t e = {5, &f};                                                          
    node_t d = {4, &f};                                                          
    node_t c = {3, &d};                                                          
    node_t b = {2, &c};                                                         
    node_t a = {1, &b};                                                         

    node_t *tmp = &a;                                                                            

    view_list(tmp);                                                             
    tmp = swap_alternate(&a);                                   
    view_list(tmp);                                                             
    return 0;                                                                   
}                                                                               
#endif   
