#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stddef.h>
#include <stdlib.h>
/* -----------------------------------------*/
/*			BINARY TREE STRUCT			    */
/* -----------------------------------------*/

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

/* ------ BINARY SEARCH TREE --------*/
typedef struct binary_tree_s binary_tree_t;

/* --------- AVL TREE ------------*/
typedef struct binary_tree_s bst_t;

/* -------- MAX BINARY HEAP -------- */
typedef struct binary_tree_s heap_t;

/* -----------------------------------------*/
/*			PRINT BINARY TREE			    */
/* -----------------------------------------*/
void binary_tree_print(const binary_tree_t *tree);

/* -----------------------------------------*/
/*			MANDATORY TASK DEF			    */
/* -----------------------------------------*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
int binary_tree_is_leaf(const binary_tree_t *node);

#endif
