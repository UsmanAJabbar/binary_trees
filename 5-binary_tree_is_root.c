#include "binary_trees.h"

/**
 * binary_tree_is_root - returns 1 if tree node is root node
 * @node: node
 * Return: 1 if root || 0 if not root or NULL
 *
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return (node && !node->parent);
}
