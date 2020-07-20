#include "binary_trees.h"

/* binary_tree_is_leaf - checks if the node given
 * has any children
 * @node: node input
 * Return: 1 if child || 0 if not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* Checks if the node exists */
	if (!node)
		return (0);
	return (!node->right && !node->left);
}
