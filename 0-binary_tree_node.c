#include "binary_trees.h"

/*
 *
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	/* Malloc Check */
	if (!new)
		return(NULL);

	/* Add data to the new node */
	new->n = value, new->right = NULL, new->left = NULL, new->parent = parent;

	return(new);
}
