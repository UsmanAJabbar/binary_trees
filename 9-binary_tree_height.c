#include "binary_trees.h"
#include "4-binary_tree_is_leaf.c"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root of the tree
 * Return: height of tree
 **/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right, left;

	/* Check if it's NULL or a leaf */
	if (!tree || binary_tree_is_leaf(tree))
		return (0);

	/* Recurse through both sides of tree */
	right = binary_tree_height(tree->right);
	left = binary_tree_height(tree->left);

	/* Return max height found + 1 */
	return (max(left, right) + 1);
}
