#include "binary_trees.h"

/**
 * binary_tree_sibling - finds sibling of a node of a binary tree
 * @node: node to find sibling for
 * Return: node to sibling | NULL if no sibling
 **/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* Check if node exists || the node has a parent */
	if (!node || !node->parent)
		return (NULL);

	/* Identify what the current node is to the parent */
	if (node->parent->right == node)
		return (node->parent->left);

	return (node->parent->right);
}
