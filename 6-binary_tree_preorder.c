#include "binary_trees.h"

/**
 * binary_tree_preorder - prints out the data in the tree
 * using pre-order traversal
 * @tree: pointer to the root of the tree
 * @func: function responsible to processing input
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
