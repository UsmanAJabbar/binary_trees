#include "binary_trees.h"

/**
 * binary_tree_insert_left - this function inserts a
 * node as the left-child of another node
 * @parent: parent node
 * @value: value to add to the newly created node
 * Return: new node || NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = binary_tree_node(parent, value);

	if (!parent || !node)
	{
		free(node);
		return (NULL);
	}

	/* Copy parent->left regardless of whether its NULL */
	node->left = parent->left;

	/* If not null and there's a node there, */
	/* make parent->left's parent our new node */
	if (parent->left)
		parent->left->parent = node;

	/* Close it off by setting parent->left to our current node */
	parent->left = node;

	return (node);
}
