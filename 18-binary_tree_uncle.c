#include "binary_trees.h"
#include "17-binary_tree_sibling.c"
/**
 * binary_tree_uncle - finds uncle of a node of a binary tree
 * @node: node to find uncle for
 * Return: node to uncle | NULL if no uncle
 **/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
