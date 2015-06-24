#ifndef __HEAD_H__
#define __HEAD_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE  1
#define FALSE 0

typedef struct NODE
{
	int val;
	struct NODE *next;
} node_t;

#define DEBUG printf("Here in [%s][%d]\n", __func__, __LINE__)

/* Function Prototypes */
node_t *insert_front(node_t *);
node_t *insert_rear(node_t *);
node_t *insert_sorted (node_t *);

node_t *delete_front(node_t *);
node_t *delete_rear(node_t *);

node_t *link_sort (node_t *);

void view_list (node_t *);
void print_reverse (node_t *);
node_t *swap_alternate (node_t *head);

node_t *reverse_list_iterative (node_t *head);
node_t *reverse_list_recursive (node_t *head);
node_t *reverse_n_list (node_t *head, int n);

node_t *get_node(node_t *);
void free_node(node_t *);
void print_menu (void);
void swap_val (node_t *, node_t *);

#endif
