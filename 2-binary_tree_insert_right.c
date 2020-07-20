#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts tree node right
 * @parent: pointer to parent node
 * @value: value to add to tree
 * Return: pointer to new node | NULL on failure
 **/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	/* If parent is NULL or malloc failed for new, return NULL */
	if (!parent)
		return (NULL);

	/* Create new node */
	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);

	/* Set new->right equal to parent's old right */
	new->right = parent->right;

	/* If parent->right is not NULL, change it's parent to new */
	if (parent->right)
		parent->right->parent = new;

	/* Set parent->right to new node */
	parent->right = new;

	return (new);
}
