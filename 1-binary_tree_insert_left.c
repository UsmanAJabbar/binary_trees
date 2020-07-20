#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts tree node left
 * @parent: pointer to parent node
 * @value: value to add to tree
 * Return: pointer to new node | NULL on failure
 **/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	/* If parent is NULL or malloc failed for new, return NULL */
	if (!parent)
		return (NULL);

	/* Create new node */
	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);

	/* Set new->left equal to parent's old left */
	new->left = parent->left;

	/* If parent->left is not NULL, change it's parent to new */
	if (parent->left)
		parent->left->parent = new;

	/* Set parent->left to new node */
	parent->left = new;

	return (new);
}
