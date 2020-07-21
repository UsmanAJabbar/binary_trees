#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if the node given
 * has any children
 * @node: node input
 * Return: 1 if leaf || 0 if not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* Checks that the node exists and it points to two NULLs */
	return (ISLEAF(node));
}
