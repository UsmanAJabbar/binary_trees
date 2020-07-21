#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root of the tree
 * Return: height of tree
 **/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right, left;

	/* Check if it's NULL or a leaf */
	if (!tree || ISLEAF(tree))
		return (0);

	/* Recurse through both sides of tree */
	right = binary_tree_height(tree->right);
	left = binary_tree_height(tree->left);

	/* Return max height found + 1 */
	return (MAX(left, right) + 1);
}
