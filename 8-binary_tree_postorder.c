#include "binary_trees.h"

/**
 * binary_tree_postorder - prints out the data in the tree
 * using post-order traversal
 * @tree: pointer to the root of the tree
 * @func: function responsible to processing input
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
