#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_levelorder - goes through a binary tree using
 *                          level-order traversal
 * @tree: pointer to tree
 * @func: parsing function
 **/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_levelorder(tree->right, func);
	binary_tree_levelorder(tree->left, func);

	printf("%d\n", tree->n);
}
