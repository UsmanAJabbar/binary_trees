#include "binary_trees.h"

/**
 * binary_tree_inorder - prints out the data in the tree
 * using in-order traversal
 * @tree: pointer to the root of the tree
 * @func: function responsible to processing input
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
